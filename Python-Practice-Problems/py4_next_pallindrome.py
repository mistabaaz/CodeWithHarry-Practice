#a program to print next pallindrome number

test_case = int(input("enter how many test case are there : "))

# taking empty list for adding test cases
list = []

for i in range(test_case):
    print(f"enter number for {i+1} test case :",end="")
    num = int(input())
    list.append(num)


# A function for reversing the number
def reverse(n):
    rev = 0
    while n!=0 :
        r = n%10
        n = n//10
        rev = rev*10+r
    return rev
     

#finding the next pallindrome
for num in list :
    n = 1
    while True :
        if n == reverse(n) and n>num:
            print(f"after {num} next pallindrome number is {n}")
            break
        else:
            n += 1

input("enter any key to continue...")
#finished