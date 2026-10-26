#A program to palindromify a list

n = int(input("enter no of elements in list :"))
list = []

# adding items to list

for i in range(n):
    print(f"enter element number {i+1}: ")
    num = int(input())
    list.append(num)


#defining a function for finding next pallinddrome

def next_pallindrome(n):
    n += 1
    while str(n) != str(n)[::-1]:
        n += 1
    return n

newList = []
for j in list :
    if j > 10:
        newList.append(next_pallindrome(j))
    else:
        newList.append(j)

print(f"pallindromified list is : \n {newList}")

input()
#finished
