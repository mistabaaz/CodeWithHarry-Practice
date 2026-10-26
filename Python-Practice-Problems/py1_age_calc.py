# Age Calculator

# Taking age or year of birth as input from user
a = int(input("enter age or year of birth : "))
curr_yr = 2023
choc = input("enter year for calculating age on that year (optional) : ")
if (a < 100 and a > 0):
    curr_age = a
    brth_yr = curr_yr - curr_age
    age100 = brth_yr + 100
    print("You will be 100 years old in" , age100)
    if (choc != "" and int(choc) >= brth_yr):
        choc = int(choc)
        age_y = choc - brth_yr
        print("Your age in" , choc , "is" , age_y)
    elif (choc != "" and int(choc) < brth_yr):
        print("You are not born on that year. (^_^)")
elif (a < curr_yr and a > curr_yr-100):
    brth_yr = a
    curr_age = curr_yr - brth_yr
    age100 = brth_yr + 100
    print("You will be 100 years old in" , age100)
    if (choc != "" and int(choc) >= brth_yr):
        choc = int(choc)
        age_y = choc - brth_yr
        print("Your age in" , choc , "is" , age_y)
    elif (choc != "" and int(choc) < brth_yr):
        print("You are not born on that year. (^_^)")
elif (a <= 0 or a >= curr_yr):
    print("You are not born yet. (^_^)")
elif (a >= 100 or a <= curr_yr-100 ):
    print("You seems to be too old. (^_^)")
else:
    print("You might entered something wrong!")




