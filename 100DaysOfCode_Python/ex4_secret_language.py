#A program to encode and decode text input

import random

def random_string(a,b,x):
    ran_str = ""
    for i in range(x):
        ran_letter = chr(random.randint(ord(a) , ord(b)))  #ord give ascii number and chr print ascii letter
        ran_str = ran_str + ran_letter
    return ran_str


def encode(text):
    en_text = ""
    words = text.split()
    for word in words:
        if(len(word)>=3):
            word = word[1:]+word[0]  #putting first character to the last of the string
            ran_str1 = random_string("A","z",3) #generate random word of 3 letters between a and z
            ran_str2 = random_string("A","z",3) 
            en_word = ran_str1 + word + ran_str2
            en_text = en_text + en_word + " "
        else:
            en_word = word[::-1]   #reverse the word
            en_text = en_text + en_word + " "
    return en_text

def decode(text):
    de_text = ""
    words = text.split()
    for word in words:
        if(len(word)>=3):
            de_word = word[3:-3]  #removing three letters from begining as well as end of string
            de_word = de_word[-1] + de_word[:-1] #putting last element to the begining
            de_text = de_text + de_word + " "
        else:
            de_word = word[::-1]
            de_text = de_text + de_word + " "
    return de_text

def menu():
    print("Main Menu".center(50,"*"))
    # print("\n1.Enter A Message")
    print("1.Encode the message")
    print("2.Decode the message")
    print("3.Exit")


while True:
    menu()
    choice = int(input("\nChoose the Correct Option(1/2/3...): "))
    # if(choice == 1):
        
    if(choice == 1):
        msg = input("\nEnter A Text Message: ")
        print("\nYour message will be Encoded soon...")
        en_msg = encode(msg)
        print("Encoded message is here: ")
        print(en_msg)
    elif(choice == 2):
        msg = input("\nEnter Encoded Text Message: ")
        print("\nYour message will be Decoded soon...")

        try:
            de_msg = decode(msg)
            print("Your Decoded message is here: ")
            print(de_msg)
        except IndexError:  #error raised because there are less characters in decoded text
            print("Please enter encoded text only!")

    elif(choice == 3):
        print("\nYou are Exiting soon...")
        break
    else:
        print("\nPlease choose a valid option!")

input()
# Program is finished
