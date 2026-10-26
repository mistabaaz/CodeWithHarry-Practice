import os
import pickle

def fetch_files(folder_path):
    
    files = sorted(os.listdir(folder_path))
    for i,file in enumerate(files):
        file_ext = os.path.splitext(f"{folder_path}\\{file}")
        file_type = file_ext[1][1:].lower()
        if(file_type == 'ini'):
            files.pop(i)  #these file types are ruining my work

    try:
        i = files.index("ex7_clear_the_clutter.py")
        files.pop(i)
        i = files.index("backup.bak")
        files.pop(i)
    except:
        pass

    return files

def rename(folder_path):

    files = fetch_files(folder_path)
    for i,file in enumerate(files):
        file_ext = os.path.splitext(f"{folder_path}\\{file}")
        file_type = file_ext[1][1:].lower()
        if not os.path.exists(file_type):
            os.mkdir(f"{folder_path}\\{file_type}")  #making extension folder
        os.rename(f"{folder_path}\\{file}", f"{folder_path}\\{file_type}\\{i+1}.{file_type}")
    total = len(files)
    return total


def b_oldnames(folder_path):

    files = fetch_files(folder_path)
    bfile = open("backup.bak","wb")
    pickle.dump(files,bfile)  #dumped a binary list containg oldnames
    bfile.close()
    total = len(files)
    return total


def r_oldnames(folder_path):

    c = 0 
    bfile = open("backup.bak","rb")
    data = pickle.load(bfile)
    bfile.close()
    files = data
    for i,file in enumerate(files):
        file_ext = os.path.splitext(f"{folder_path}\\{file}")
        file_type = file_ext[1][1:].lower()  #for removing dot
        if not os.path.exists(f"{folder_path}\\{file_type}"):
            print("{file},File not found")
            c += 1
        os.rename(f"{folder_path}\\{file_type}\\{i+1}.{file_type}", f"{folder_path}\\{file}")
    
    return c


print(f"Current Working directory is {os.getcwd()}")
print("\n## Press enter if the you want to work on current folder ##")
folder = input("Enter the path of the folder: ")
if (not folder):
    folder = os.getcwd()

while True:
    
    print("Main Menu".center(50, "="))
    print("\n1.Backup the names of files")
    print("2.Restore the names of files")
    print("3.Clear the clutter by renaming")
    print("4.Print the Files names ")
    print("5.Exit")

    ch = int(input("\nChoose the option from above list: "))
    if (ch == 1):
        num = b_oldnames(folder)
        if (num > 0) :
            print(f"\n{num} file names are backed up!")
    elif (ch == 2):
        num = r_oldnames(folder)
        if (num > 0) :
            print(f"\n{n} file names cannot be restored!")
    elif (ch == 3):
        num = rename(folder)
        if (num > 0) :
            print(f"\n{num} files are organised.")
    elif (ch == 4):
        files = fetch_files(folder)
        print(files)
        print(f"Total {len(files)} are present in current directory.")
    elif (ch == 5):
        print("\nThanks for using the service...")
        break
    else :
        print("\nPlease choose from above options..")

input()
