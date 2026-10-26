/*
Author : mistabaaz
Date : 22 Oct 2024
Description : A simple game Rock, Paper and Secior*/

#include <stdio.h>  // printf(), scanf()
#include <stdlib.h> // srand()
#include <string.h> // strcpy()
#include <time.h>   // time()


// result matrix to
int result[3][3] = {
    {2, 0, 1}, // 0 means user lose
    {1, 2, 0}, // 1 means user win
    {0, 1, 2}  // 2 means draw
};


int user_choice() {
    unsigned int choice;

    printf("\n\t1 Rock\n\t2 Paper\n\t3 Scissor\n");
    printf("\nEnter 4 to quit:");
    scanf("%u", &choice);
    getchar(); // to overcome \n issue
    printf("\n");

    if (choice > 4) {
        printf("\nPlease Choose Correct Option!\n");
        choice = user_choice();
    }

    return choice - 1;
}

int comp_choice() {
    time_t seed = time(NULL);
    srand(seed); // for creating randomness using time

    int choice = rand() % 3;
    return choice;
}

int main() {
    // normal view for rock paper scissor game
    int user, comp;
    char *choices[3] = {"Rock", "Paper", "Scissor"};
    // for displaying computer choice

    while (1) {
        printf("\n\nRock Paper Scissor\n");
        user = user_choice();
        comp = comp_choice();
        printf("Computer choosed %s\n", choices[comp]);

        if (user == 3) { // 3 means exit
            printf("Okay leaving....\n");
            break;
        }

        int winner = result[user][comp]; // gives winner index

        if (winner == 0) {
            printf("\nComputer is the Winner :( \n");
        } else if (winner == 1) {
            printf("\nYou are the Winner :)\n");
        } else if (winner == 2) {
            printf("\nMatch Drawn :| \n");
        } else {
            printf("\nEven computer dosen't know who wins ^-^\n");
        }
    }

    return 0;
}

