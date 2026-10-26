// we have to make flexible c program to take empID of variable length

#include<stdio.h>
#include<stdlib.h>  // for malloc(), realloc(), free()
#include<string.h> // only for strlen()

char *get_variable_string();  // lets give it a try

int main() {
    int num; // for number of employees

    printf("Enter how many employees are there: ");
    scanf("%d", &num);
    getchar(); // to eat \n
    printf("\n");

    char **emp;  
    emp = (char **) malloc(num * sizeof (char *) );
    // array of num size char pointers ( array of adress where char stored)
    
    for (int i = 0; i < num; i++) {

        printf("\nenter empID no %d: ", i + 1);
        char *temp = get_variable_string();
        *(emp + i) = temp;  // stored pointer in our dynamic array

    }
    printf("\n");

    for (int i = 0; i < num; i++) {

        char *temp = *(emp + i);
        printf("\nempID no %d = %s ", i + 1, temp);
        free(temp); // freeing up as we dont need it afterwards

    }

    // char *temp = *(emp + 1);
    free(emp);  // our dynamic array
    // printf("%s", temp);  // i have tested this 
    // free(**emp) only frees outer allocated memory not inside
    
    return 0;
}

char *get_variable_string() {
    
    char *str; char *temp; // for allocating memory

    str = (char *) malloc(3);  // but we actually need 3 \n\0
    // one char is only 1 byte in every system
    // so we have allocated memory for one character only

    // printf("Enter your string : ");  // just for good input

    fgets(str, 3, stdin);  // 3 characters must for a string (a word \n \0 )
     // this will get as many characters until \n 
    // but parse only one character to temp :) bec we specified max_size 1

    // so here what we will do until we find \n in character we will reallocate memory
    // and fgets will automatically parse into temp ( you need not to worry)

    int memory_bytes = 4; // we already allocated 3 byte into memory
    int string_index = 1; // starts from 1 as second last character will have \n 

    while ( *(str + string_index) != '\n') {
        temp = (char *) realloc(str, memory_bytes);   

        if ( temp == NULL) {

            printf("\nsorry we cannot assign more memory!\n");
            printf("\ntrying to assign %d bytes!\n", memory_bytes );
            printf("char no: %d\n", string_index);
            free(temp); // to free the memory
            return str;  // returned the incompleted string

        } else {
            str = temp;  // reallocated memory assigned to str
        }

        fgets( (temp + string_index + 1) , 2, stdin);  // temp + 1 becuase not to overwrite previous memory adress
        
        memory_bytes++; // need 1 byte more
        string_index++; 
    }
    
    *(str + string_index) = '\0'; // replaced \n with \0 to end the string

    return str;
}

/*
i think its all works due to stdin (a file descriptor) which stores our input
and fgets take input from there and parse into variable acc to size
sorry if i am wrong as i am not confirmed and don't know much about file descriptor 
*/