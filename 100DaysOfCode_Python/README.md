# 100DaysOfCode_Python
All Python Exercises of CodeWithHarry 100DaysOfCode Python Tutorial
<details>
    <summary>Python Exercise 1</summary>
  <br>
  Exercise : Take two inputs from the user and print values after applying all the airthmetic functions.
  <br><br>
  
Output Should be like this:
```
enter first number :4
enter second number : 8
addition of given two numbers is  12
diffrence of given two numbers is  -4
by multiplying given two number we get  32
by dividing the given two number we get  0.5
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex1_calculator.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 2</summary>
  <br>
  Exercise : Greet the user according to the day.For example if it is morning then your program should greet with "Good Morning Sir!" and if it is noon then "Good Afternoon Sir!" and so on. Without asking time from the user.
  <br><br>
  
Output Should be like this:
    
```
Good Evening Sir!
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex2_good_morning_sir.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 3</summary>
  <br>
  Exercise : Make a quiz like KBC(Kaun Banega Crorepati).Display all the questions and 4 options.100 rupees will be given for 1 correct answer and a penalty of 100 rupees for 1 wrong answer.Display the results after end of the qestions.
  <br><br>
  
Output Should be like this:
    
```
          Question Number 1

What is the Capital of India?
1.Chandigrah
2.Gujrat
3.Delhi
4.Haryana

Note: Enter only option like 1/2/3/4
Choose the correct option: 3

Horray! You have chosen the right answer: 3.Delhi
You win 100 rupees.

          Question Number 2

When Haryana was separated from Punjab?
1.In 1857
2.In 1947
3.In 2010
4.In 1991

Note: Enter only option like 1/2/3/4
Choose the correct option: 3

Oops! You chosen the wrong answer.
Correct Answer is: 4.In 1991
You Lose 100 rupees.

Now it's time to check your results!
You have given 1 right answers in total and 1 wrong answers.
Therefore

You Lose total of 0 rupees
```
<br>
Hint: You may use a list for storing questions and answers.
    <br><br>
    
Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex3_kbc.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 4</summary>
  <br>
  Exercise : Make a program to encode & decode user's text messages.
  <br><br>
  
Output Should be like this:
    
```
***************Main Menu***************
1.Encode the message
2.Decode the message
3.Exit

Choose the Correct Option(1/2/3...): 1

Enter A Text Message: hello whats'up

Your message will be Encoded soon...
Encoded message is here: 
oXsellohqr[ AF^hats'upweQT 


***************Main Menu***************
1.Encode the message
2.Decode the message
3.Exit

Choose the Correct Option(1/2/3...): 2

Enter Encoded Text Message: oXsellohqr[ AF^hats'upweQT

Your message will be Decoded soon...
Your Decoded message is here: 
hello whats'up 


***************Main Menu***************
1.Encode the message
2.Decode the message
3.Exit

Choose the Correct Option(1/2/3...): 3

You will be exiting soon...
```
    
Methods to Encode a single word:
- if word length is less than 3 then reverse the word (i.e ok --> ko)
- otherwise put first letter of the word into last (and remover it from the beginning i.e hello-->elloh)
- then add random three letters in the begining as well as ending (i.e elloh-->kidellohmin)

    <br>
    
Methods to Decode a single word:
- check if the length of the word is less than 3 if yes then reverse the word (i.e ko-->ok)
- otherewise remove 3 letters of the word from both the beginning and ending (i.e kidellohmin --> elloh)
- after that put the last letter of the word to the beginning (i.e elloh --> hello)

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex4_secret_language.py)
 
---
  
</details>


<details>
    <summary>Python Exercise 5</summary>
  <br>
  Exercise : Let's Make classic game named Snake,Water and gun. Simmilar to Rock,Paper and Secior.
  <br><br>
  
Output Should be like this:
    
```
************************* A simple game with computer **************************

First turn is yours
0 for snake,1 for water,2 for gun,3 for exit
Choose from above options: 0

Computer chooses Gun
Therefore : Computer Wins

First turn is yours
0 for snake,1 for water,2 for gun,3 for exit
Choose from above options: 0

Computer chooses Snake
Therefore : A draw!!! try again..

First turn is yours
0 for snake,1 for water,2 for gun,3 for exit
Choose from above options: 3

Okay!,exiting after showing final results.
The final winner is Computer.
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex5_snake_water_gun.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 6</summary>
  <br>
  Exercise : The General Library. Make a software having 2 or 3 working functions like (i) no_of_books() (ii) avalible_books_name() like this try to make a working library . You can also add a request feature in library so that a user can add his required books. But all this have to be done using Classes.
  <br><br>
  
Output Should be like this:
    
```
===============The General Library================


1.Display The Books present in Library
2.Request a Book
3.Get the Number of Availible Books
4.Exit

Enter a choice (1,2,3...): 1


        1.The Great Show
        2.The Squirrl
        3.An Amazing Creature

```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex6_the_general_library.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 7</summary>
  <br>
  Exercise : Make a software to organise your folders. Move the files according to their extension using os module.
  <br><br>
    
Output Should be like this:
    
```
Current Working directory is C:\Users\Admin\Documents\Documents\Python\excercise
press enter if the you want to work on current folder
Enter the path of the folder:
====================Main Menu=====================

1.Backup the names of files
2.Restore the names of files
3.Clear the clutter by renaming
4.Exit

Choose the option from above list: 4
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex7_clear_the_clutter.py)
 
---
  
</details>


<details>
    <summary>Python Exercise 8</summary>
  <br>
  Exercise : Make a program to merge multiple pdfs into one pdf. You may use pypdf module. IF you want to add more functoinallites you are welcome.Merge the pdf according to alphabet sorting.
  <br><br>
    
Output Should be like this:
    
```
Current Working directory is C:\Users\Admin\Documents\Documents\Python\excercise
press enter if the you want to work on current folder
Enter the path of the folder:
====================Main Menu=====================

1.PDF files in current folder
2.Merge the all PDFs present in current folder
3.Change the current folder
4.Exit

Choose the option from above list: 4
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex8_merge_the_pdf.py)
 
---
  
</details>


<details>
    <summary>Python Exercise 9</summary>
  <br>
  Exercise : Make a list of user names.And use "pywin32" module to speak the user name.You may use any other module for other opreating system as its only works with windows.Or you can also make greeting program which greet the user with name and time respectively.
  <br><br>
  
Output Should be like this:
    
```
"Shoutout to Name"
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex9_shoutout_to_everyone.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 10</summary>
  <br>
  Exercise : Try to make the News fetching app.you may use requests module to get news from newsapi.Your program should display random newses to users.Or add functionality to let users choose the category of news.
  <br><br>
  
Output Should be like this:
    
```
::::::::::::::Welcome to NewsStation::::::::::::::
1.for random news
2.To generate news acc to category
3.exit
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex10_news_app.py)
 
---
  
</details>

<details>
    <summary>Python Exercise 11</summary>
  <br>
  Exercise : Make a Desktop notifier using python. Like a health remainder to remind you every 30 mins.But this tiem i am not gona to give you hint as this is our last excercise.So struggle yourself to make this notifier.
  <br><br>
  
    
```
Always Be Happy :)
```

Solution : [Click here](https://github.com/mistabaaz/100DaysOfCode_Python/blob/main/ex11_desktop_notifier.py) <br><br>
I Also made a command line utility to do this see here <br>
Command Line Utility: [Click here](https://github.com/mistabaaz/desktop_notifier)

---
  
</details>
