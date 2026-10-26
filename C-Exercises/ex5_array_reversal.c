// reverse the array without creating new array

#include<stdio.h>

void arrayPrint(int array[], int len) {
    int i = 0;

    printf("{%d", array[i]);  // opening of array
    for (i = 1; i < len; i++) {  
        // starting from 1 as 0 is already printed 
        printf(", %d",array[i]);
    }
    printf("}"); // closing of array
    return;

}

/*
we can make a string of arrayPrint and print it using %s anywhere  
i know its complicated but i want to make it like a python array {sets} 
we can use strcat() function for adding values in a string needs string.h 
we will work on that later on :)   sprintf() will help us
*/

void arrayReverse(int array[], int len) {
    int size = --len / 2; int temp;

    for (int i = 0; i < size; i++) {
        temp = array[i];
        array[i] = array[len - i];
        array[len - i] = temp;
    }
}

int main () {
    int arr[] = {11,22,33,44,55} ;  // initialized an array

    printf("array before reversing : ");
    arrayPrint(arr,5);  // printing using own function
    arrayReverse(arr,5); // reversed using own function
    printf("\nafter array reversed : ");
    arrayPrint(arr,5);

}