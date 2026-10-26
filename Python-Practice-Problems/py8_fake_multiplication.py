# a program to check where is mistake in multiplication table
import random

def fakemult(n):
    list = []
    rnd = random.randint(2,9) # for making mistake on random place
    for i in range (1,11):
        if i == rnd:
            list.append(n*i+2)
        else:
            list.append(n*i)
    return list

def checker(list,num):
    for i in list:
        if i == num:
            return True  #if the accurate value exist in list
            break
    else:
        return False

x = int(input("enter a number for multiplication table: "))
list = fakemult(x)
print(f"Ram Prsad\'s list of multiplication table of {x} is :\n {list}")
for i in range(1,11):
    num = x*i
    if checker(list,num):
        pass
    else:
        print(f"There is a mistake in Ram Prsad function at {x}x{i} ")
        print(f"accurate value is {num}")

input()
#finished