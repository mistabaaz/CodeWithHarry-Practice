# Simple Snake,Water,Gun game for children
import random

name = ["Snake","Water","Gun"]
result = [[ 0,-1, 1],
          [ 1, 0,-1],
          [-1, 1, 0]]   # -1 lose 0 tie 1 win
comp_scr = [0]
plyr_scr = [0]

def score(comp,plyr,c,p):

    if(result[comp][plyr]== (-1)):
        print("Computer Wins")
        c[0] += 1
    elif(result[comp][plyr]==1):
        print("You Wins")  
        p[0] += 1
    else:
        print("A draw!!! try again..")



def winner():
    if(comp_scr[0]>plyr_scr[0]):
        print("The final winner is Computer.")
    elif(comp_scr[0]<plyr_scr[0]):
        print("Congratulations!!! You are the overall Winner.")
    else:
        print("The game is drawn...")


print(" A simple game with computer ".center(80,"*"))

while True:
    print("\n\nFirst turn is yours ")

    while True:
        try:
            print("0 for snake,1 for water,2 for gun,3 for exit")
            ch = input("\nChoose from above options: ")
            num = int(ch)
            break
        except ValueError:
            print("please enter correct option")
    if(num!=3):
        ran = random.randint(0,2)
        print(f"\nComputer chooses {name[ran]}")
        print("Therefore\n")
        score(ran,num,comp_scr,plyr_scr)
    elif(num==3):
        print("Okay!,exiting after showing final results.")
        winner()
    else:
        print("please choose correct option")

input()

