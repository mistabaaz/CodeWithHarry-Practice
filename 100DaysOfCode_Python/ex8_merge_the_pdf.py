import pypdf
import os


def ck_int():  #to conquer the error during input
    while True:
        try:
            var = input("Choose from the above option: ")
            var = int(var)
            break
        except ValueError:
            print("Please enter appropiate option!")

    return var


def fetch_pdf(path):   # to fetch all pdf files 
    pdf = []
    files = sorted(os.listdir(path))
    for file in files:
        fp = f"{path}\\{file}"  #file path
        ext = os.path.splitext(fp)[1].lower() #extension of file
        #condition for pdf file
        if os.path.isfile(fp) and ext == ".pdf":
            pdf.append(file)

    return pdf

def multiple_dir(path,file):
    i = 1
    while True:   #for creating many pdf of same name 
        if os.path.exists(f"{path}\\{file+str(i)}.pdf"):
            i = i + 1
            continue
        else:
            pdf = open(f"{path}\\{file+str(i)}.pdf","wb")
            pdf.close()
            return file+str(i)
            
            
def merged_pdf(path):
    pdf = fetch_pdf(path)
    name = multiple_dir(path,"merged")
    merger = pypdf.PdfWriter()
    for pages in pdf:
        merger.append(f"{path}\\{pages}") 
    with open(f"{path}\\{name}.pdf","wb") as file:
        merger.write(file)
    merger.close()
    return f"{path}\\{name}.pdf"

def encrypt_pdf(path,file,pwd):

    name = multiple_dir(path,f"{file[:-4]}_encrypted")
    reader = pypdf.PdfReader(f"{path}\\{file}")
    writer = pypdf.PdfWriter()
    for page in reader.pages:  #copy all the pages into new pdf
        writer.add_page(page)
    writer.encrypt(pwd)  #lock that pdf
    with open(f"{path}\\{name}.pdf","wb") as file:
        writer.write(file)    #write the protected pdf into file
    writer.close()
    return f"{path}\\{name}.pdf"

def decrypt_pdf(path,file,pwd):

    name = multiple_dir(path,f"{file[:-4]}_decrypted")
    reader = pypdf.PdfReader(f"{path}\\{file}")
    writer = pypdf.PdfWriter()
    if reader.is_encrypted:
        reader.decrypt(pwd)
    for page in reader.pages:
        writer.add_page(page)
    with open(f"{path}\\{name}.pdf","wb") as file:
        writer.write(file)
    writer.close()
    return f"{path}\\{name}.pdf"
    

if __name__ == "__main__":

    print("Welcome to PDFtools".center(50, "*"), "\n")
    cdir = os.getcwd()  #current dir
    print("If you want to use current path then press enter")
    print(f"Current working path is {cdir}")
    path = input("Enter the path: ")
    if not (path) or not os.path.exists(path):
        path = cdir  #current path
        print("\nyou didn't specify the path correctly")

    while True:
        #Main Menu
        print("HomePage".center(25,"="))
        print("\n1.PDF files in current folder")
        print("2.Merge the all PDFs present in current folder")
        print("3.Custom Merging")
        print("4.Encrypt the PDF")
        print("5.Decrypt the PDF")
        print("6.Change the current folder")
        print("7.Exit\n")
        choice = ck_int()

        if (choice == 1):

            pdf = fetch_pdf(path)
            if not pdf:
                print("\n No pdf is avalible in current folder!!")
            else :
                print(f"\nAvailible PDF's : {pdf}")

        elif (choice == 2):

            print("\n\nNote: pdf files are merged acc. to alphabet sorting!")
            print("Therefore you must place your pdf in alphabet sorting.")
            print(f"\nCurrent files in order are: {fetch_pdf(path)}")
            ans = input("\n\nDo you want to merge the pdf(y/n): ")
            if not fetch_pdf(path):
                print("\nNo pdf files to merge!!")
                continue
            if ans.lower() == "y":
                out = merged_pdf(path)
                print(f"\nHere is your merged pdf stored: \n{out}")

        elif (choice == 3):

            print("\nAvailible Soon!!!")

        elif (choice == 4):

            print("Encryption".center(25,"="))
            pdf = fetch_pdf(path)
            print("\nChoose from the current pdf files: ")
            print(pdf)
            print("Please choose from above pdfs(1,2,3...)\n")
            ch = ck_int() #choice
            if ch not in range(1,len(pdf)+1):
                print("\nplease choose from above opotion!!")
                continue
            file = pdf[ch-1]
            pwd = input(f"Enter the password for {file}: ")
            out =  encrypt_pdf(path,file,pwd)
            print(f"\nHere is your encrypted pdf: \n{out}")

        elif (choice == 5):

            print("Decryption".center(25,"="))
            pdf = fetch_pdf(path)
            print("\nChoose from the current pdf files: ")
            print(pdf)
            print("Please choose from above pdfs(1,2,3...)\n")
            ch = ck_int() #choice
            if ch not in range(len(pdf)+1):
                print("\nplease choose from above opotion!!")
                continue
            file = pdf[ch-1]
            pwd = input(f"Enter the password for {file}: ")
            out =  decrypt_pdf(path,file,pwd)
            print(f"\nHere is your decrypted pdf: \n{out}")

        elif (choice == 6):

            folder = input("Enter full path of the folder: ")
            if not  folder or not os.path.exists(folder):
                print("Enter Valid Input!!")
                continue
            os.chdir(folder)
            print(f"Now your current directory is {os.getcwd()}")

        elif (choice == 7):

            ans = input("\n\n Confirm to exit (y/n): ")
            if ans.lower() == "y":
                break
            else:
                print("Please enter valid input!!")

        else:
            print("\n\n Please choose correct option!!")
