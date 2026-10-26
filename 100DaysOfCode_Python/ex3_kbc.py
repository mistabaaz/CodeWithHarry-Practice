#A program like quiz of kaun banega crorepati

ques = ["What is the Capital of India?","When Haryana was separated from Punjab?"]  #all questions
options = [["Chandigrah","In 1857"],["Gujrat","In 1947"],["Delhi","In 2010"],["Haryana","In 1991"]]
right_options = [3,4]   #option number for right answers
given_right_ans = 0
given_wrong_ans = 0
score = 0

print("\n+++++++++++++++++++++Questions+++++++++++++++++++++\n")

size = len(ques)
for n in range(0,size):
    print("\n          Question Number",n+1,"\n")
    print(ques[n])
    for i in range(0,4):
        print(i+1,".",options[i][n],sep="")
    print("\nNote: Enter only option like 1/2/3/4")
    ans = int(input("Choose the correct option: "))
    correct_option = right_options[n] #obtaining right option from list
    correct_answer = options[correct_option-1][n]  #-1 is used for index
    if ans == correct_option:
        print("\nHorray! You have chosen the right answer: ",correct_option,".",correct_answer,sep="")
        print("You win 100 rupees.")
        given_right_ans += 1  #it is used for counting the correct answers
    else:
        print("\nOops! You chosen the wrong answer.")
        print("Correct Answer is: ",correct_option,".",correct_answer,sep="")
        print("You Lose 100 rupees.")
        given_wrong_ans -= 1  

print("\n+++++++++++++++Result+++++++++++++++++\n")
print("Now it's time to check your results!")
score = given_right_ans + given_wrong_ans
print("You have given",given_right_ans,"right answers in total and",abs(given_wrong_ans),"wrong answers.")
print("Therefore\n")
if score>0:
    print("You wins total of",score*100,"rupees")
else:
    print("You Lose total of",abs(score)*100,"rupees")  #abs used for obtaining postive result 

input()
#finished