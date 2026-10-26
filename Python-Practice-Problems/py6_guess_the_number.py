#A multiplayer game to guess the number between given user range

import random

def random_num():
    if a<b and a!=b:
        num = random.randint(a,b)
    elif a>b:
        num = random.randint(b,a)
    else:
        print("please enter appropiate range")
    return num
    
def guess(player):
    t = 1   #for counting trials of player 1
    while True:
        n = int(input("guess the number : "))
        if n>num:
            print("Wrong , please try again with smaller number.")
        elif n<num:
            print("Wrong , please try again with greater number.")
        else:
            print(f"Correct , you guessed the right number in {t} trials.")
            break
        t += 1
    return t
    


#adding players name 
player1 = input("enter name of first player(or press enter to skip) : ")
player2 = input("enter name of second player(or press enter to skip) : ")

if player1 == "":
    player1 = "Player1"
if player2 == "":
    player2 = "Player2"


#storing the range generating a random number
print("enter range in which you want to guess the number : ")
a = int(input("enter starting range : "))
b = int(input("enter last range : "))



#starting the game
print(f"starting with {player1} : ")
num = random_num()
t1 = guess(player1)
print(f"now is the turn of {player2} : ")
num = random_num()
t2 = guess(player2)

#finding the winner
if t1<t2:
    print("and the winner is .....")
    print(player1)
elif t2<t1:
    print("and the winner is .....")
    print(player2)
else:
    print("match is drawn")

input()
#finished
    















    
    
