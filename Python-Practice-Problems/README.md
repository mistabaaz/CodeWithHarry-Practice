# Python-Practice-Problems
Solutions to the Python Problems of CodeWithHarry Tutorial

<details>
    <summary>Python Problem 1</summary>
  <br>
  Problem : Input age or (year of birth) from the user and tell them the year when they will become 100 years old.
Also user may provide year(optional) and your program able to tell the age of user on that particular year.
<br><br>
    
For example:

```
Enter age or year of birth: 17
enter year on which you want to know your age(Optional): 2004
You will be 100 years old in 2106
You are not born in the year 2004 :)
```
  <br>
    
Notes:
- User can input any of the age(or year of birth) and your program should run on both types of input.
- if user enter the year (for which year he want to know his age) which is less than his birth year than your program should say (you are not born on that year)
- means you have to handle some types of error even if user entered something wrong!

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py1_age_calc.py)
  
  ---
</details>


<details>
    <summary>Python Problem 2</summary>
  <br>
  Problem : Harry got n number of apples and he want to distribute it in some students. Your program should ask the range of students and give output as how much apple can he distribute to the students.Your program should also suggest them to buy or donate apple if it is less or excessive respectively.
<br><br>
    
For example:

```
enter how many apples harry got : 4
enter range of students :
enter minimum no. of Students : 1
enter maximum no. of students : 3
yes , harry can divide 4 apples in 1 students.
each students will get 4 apples
yes , harry can divide 4 apples in 2 students.
each students will get 2 apples
yes , harry can divide 4 apples in 3 students.
but you have to donate 1 apples (>_<)
then , each students will get 1 apples
```
  <br>
    
Notes:
- You have to handle all types of error like
- if there are 4 apples and you have to distribute in 5 students so your program shoud say harry have to buy 1 apple more and then everyone can get 1 apple.
- and if there are 5 apples and you have to distribute in 2 students then your program should say donate 1 apple to someone needy then everyone get 2 apples.

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py2_apple_div.py)
  
  ---
</details>


<details>
    <summary>Python Problem 3</summary>
  <br>  
    
  Problem : Take a list of diffrent food from the user and reverse the list using three methods.
  - using slicing method
  - using a built-in function
  - using for loop
    
Note : reverse list have to be same for all the three mehods

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py3_reverse_food_items.py)
  
  ---
</details>

<details>
    <summary>Python Problem 4</summary>
  <br>  
    
  Problem : Take input from user (as many as user wants) and print next palindrome numbers.
<br><br>
    
For example:

```
enter how many numbers you want to input : 4
enter number for 1 test case :8
enter number for 2 test case :99
enter number for 3 test case :43
enter number for 4 test case :67

after 8 next pallindrome number is 9
after 99 next pallindrome number is 101
after 43 next pallindrome number is 44
after 67 next pallindrome number is 77
```    
  <br>
    
Notes : 
- User can provide numbers as much as they want to be.
- Pallindrome number is a number which looks same from reading both the sides.
- for example : 111,44,77,121 etc they readed same from both sides

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py4_next_pallindrome.py)
  
  ---
</details>

<details>
    <summary>Python Problem 5</summary>
  <br>  
    
  Problem : Take a list from user and pallindromify the list.
<br><br>
    
For example:

```
enter no of elements in list :4
enter element number 1:54
enter element number 2:7
enter element number 3:96
enter element number 4:4
pallindromified list is :
[55, 7, 99, 4]
```    
  <br>
    
Notes : 
- palindromify the numbers of the list only if the number is greater than 10.
- palindromify means next pallindrome of the given number.

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py5_palindrome_list.py)
  
  ---
</details>

<details>
    <summary>Python Problem 6</summary>
  <br>  
    Problem : Make a game like guessing the number.let me explain you have to make a multiplayer game.First take range from the user that in what range he will guess the number for example he choose 9 to 12 so your program have to generate a random number between this range and both two players try to guess that random number who guess the number in less trials that is the winner.
    <br><br>
    
For example:
```
enter range in which you want to guess the number : 
enter starting range : 7
enter last range : 14
starting with Player1 : 
guess the number : 8
Wrong , please try again with greater number.
guess the number : 12
Correct , you guessed the right number in 2 trials.
now is the turn of Player2 : 
guess the number : 12
Wrong , please try again with smaller number.
guess the number : 9
Wrong , please try again with smaller number.
guess the number : 8
Correct , you guessed the right number in 3 trials.
and the winner is .....
Player1
```
<br>
    
Notes : 
- you can ask user his name optionally
- your program must provide guidance to player like
- try to guess greater number or smaller number

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py6_guess_the_number.py)
    
    
  ---
</details>


<details>
    <summary>Python Problem 7</summary>
  <br>  
    Problem : Let's make a search Engine! . First you have to make own list of sentences. After that make program to take words from user to search them within your list .And show appropiate results.
    <br><br>
    
For example:
```
Enter query to be searched : python

Total 2 results found :

python is python not snake
python is good
```
<br>
    
Notes : 
- If a word comes two or more times in a sentence then it have to be appear on top
- and then next sentence and so on...

Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py7_search_engine.py)
    
    
  ---
</details>

<details>
    <summary>Python Problem 8</summary>
  <br>  
    Problem : Your friend makes a function to print multiplication table of any number.But he/she used a random module to make a mistake in table to challenge your knowledge.So you have to make a pyhton program which have two functions (i) false_table() (ii) mistake_finder(). So your program have to find the mistake in table and print where this mistake occur.
    <br><br>
    
For example:
```
enter a number for multiplication table: 7
Ram Prsad's list of multiplication table of 7 is :
 [7, 14, 21, 28, 35, 42, 51, 56, 63, 70]
There is a mistake in Ram Prsad function at 7x7
accurate value is 49
```
<br>
    
Notes : 
- Make the mistake very hard to find by user i.e 9x9 = 81 made it 83 or 76 like that .
- Don't make big difference it can be caught easily.
  
Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py8_fake_multiplication.py)
    
    
  ---
</details>

<details>
    <summary>Python Problem 9</summary>
  <br>  
    Problem : You have to make a program to rearrange the surnames of person names.First take input from the user that how many person are there. And then jumble the last name of every person with each other.
    <br><br>
    
For example:
```
enter how many people: 3
enter full name of person 1: Alex Walter
enter full name of person 2: Suraj Pathak
enter full name of person 3: Rohan Delhi
Printing jumbled names :
Alex Pathak
Suraj Walter
Rohan Delhi
```
<br>
    
  
Solution : [Click here](https://github.com/mistabaaz/Python-Practice-Problems/blob/main/py9_jumbled_funny_names.py)
    
    
  ---
</details>
