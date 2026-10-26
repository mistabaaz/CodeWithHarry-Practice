// program to print table of any given number

#include<stdio.h>

int main(){
    int num;
    // number of which table is printed

    printf("enter a number: ");
    scanf("%d",&num);

    // printing multiplication table
    printf("\n%d X 1 = %d",num,num*1);
    printf("\n%d X 2 = %d",num,num*2);
    printf("\n%d X 3 = %d",num,num*3);
    printf("\n%d X 4 = %d",num,num*4);
    printf("\n%d X 5 = %d",num,num*5);
    printf("\n%d X 6 = %d",num,num*6);
    printf("\n%d X 7 = %d",num,num*7);
    printf("\n%d X 8 = %d",num,num*8);
    printf("\n%d X 9 = %d",num,num*9);
    printf("\n%d X 10 = %d",num,num*10);

    //program finished
    return 0;
}