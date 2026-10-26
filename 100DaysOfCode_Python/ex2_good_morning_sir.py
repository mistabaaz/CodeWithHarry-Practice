# A program to greet user according to time

import time
t = time.localtime()  # takes the time from current machine
hours = t.tm_hour   # provide the value of current hour
if hours<=12:
    print("Good Morning Sir!")
elif hours<=16:
    print("Good Afternoon Sir!")
elif hours<=20:
    print("Good Evening Sir!")
else:
    print("Good Night Sir!")

input()
#Finished
