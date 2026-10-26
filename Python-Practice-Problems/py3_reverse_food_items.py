# A program to reverse a list using three methods

def method3(list):
    rev_list = list[:]
    l = len(rev_list)
    half_len = int(l/2)
    for i in range(0,half_len):
        rev_list[i],rev_list[l-1] = rev_list[l-1],rev_list[i]
        l -= 1
    return rev_list

l = list(eval(input("Enter list of food items seperated by comma : ")))
l2 = l[:]
l2.reverse()
r1 = l2
r2 = l[::-1]
r3 = method3(l)
print("reversed list of food items")
print(r1)
print(r2)
print(r3)
if r1==r2==r3:
    print("result by all three methods are same")

#finished
