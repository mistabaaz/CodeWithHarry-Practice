#create jumbled funny names by rearranging sernames 
import random

def swaplist(list):
   l = len(list) // 2
   for i in range(l):
       rnd = random.randint(0,l)
       list[i],list[rnd] = list[rnd],list[i]
   return list
   
num = int(input("enter how many people: "))
f_name = []
l_name = []
for i in range (0,num):
    lname = ""
    list = []
    name = input(f"enter full name of person {i+1}: ")
    list = name.split()
    f_name.append(list[0])  # adding first name of every person
    for str in list[1::1]:
        lname = lname+str+" "  # making string of last name
    l_name.append(lname)

#jumbling last name list
l_name = swaplist(l_name)
print("Printing jumbled names :")
for n in range(len(f_name)):
    jname = f_name[n]+" "+l_name[n]
    print(jname)

input()
#finished