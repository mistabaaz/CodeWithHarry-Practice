# Apple Divisor

n = int(input("enter how many apples harry got : "))
tn = n
have_appl = n
print("enter range of students : ")
mn = int(input("enter minimum no. of Students : "))
mx = int(input("enter maximum no. of students : "))
if (n != 0 and n > 0):
    if (mn == mx and mn > 0):
        print("this is not a range , minimum and maximum no. of students are same .")
        if (n % mn == 0):
            appl = int(n / mn)
            print("yes , harry can divide" , n , "apples in" , mn , "students.")
            print("then , each students will get" , appl , "apples")
        else:
            while (n % mn != 0):
                n += 1
                mor_appl = n - have_appl
            while (tn % mn != 0):
                tn -= 1
                less_appl = have_appl - tn
            if (less_appl < mor_appl and (tn / mn != 0)):
                appl = int(tn / mn)
                print("yes , harry can divide" , have_appl , "apples in" , mn , "students.")
                print("but you have to donate" , less_appl , "apples (>_<)")
                print("then , each students will get" , appl , "apples")
            else:
                appl = int(n / mn)
                print("yes , harry can divide" , have_appl , "apples in" , mn , "students.")
                print("but you need" , mor_appl , "more apples")
                print("then , each students will get" , appl , "apples")
    elif (mn < mx and mn > 0 ):
        for i in range(mn , mx+1):
            n = have_appl
            tn = have_appl
            if (n % i == 0):
                appl = int(n / i)
                print("yes , harry can divide" , n , "apples in" , i , "students.")
                print("each students will get" , appl , "apples")
            else:
                while (n % i != 0):
                    n += 1
                    mor_appl = n - have_appl
                while (tn % i != 0):
                    tn -= 1
                    less_appl = have_appl - tn
                if (less_appl < mor_appl and (tn / i != 0)):
                    appl = int(tn / i)
                    print("yes , harry can divide" , have_appl , "apples in" , i , "students.")
                    print("but you have to donate" , less_appl , "apples (>_<)")                
                    print("then , each students will get" , appl , "apples")
                else:
                    appl = int(n / i)
                    print("yes , harry can divide" , have_appl , "apples in" , i , "students.")
                    print("but you need" , mor_appl , "more apples")
                    print("then , each students will get" , appl , "apples")
    elif (mn < 0):
        print("if u don't have students then buy dumb man don't enter 0 here !")
    else:
        print("Are you mad , blind (-_-)")
        print("You don't see any diffrence in maximum and minimum!")
else:
    print("you need some apples dumb begger (>-_-<)")






