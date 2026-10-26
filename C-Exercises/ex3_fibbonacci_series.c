// program to check more efficent method to calculate fibbonacci series
// try with printing upto 42 series and you will see which method is slow



#include<stdio.h>

int nth_fibbonacci_using_recursion(int num);
int nth_fibbonacci_using_iteration(int num);
int fibbonacci_print(char choice);

int main() {
    
    char choice;

    while (1){
        printf("\n\t***Select From below Option***\t\n");
        printf("\n1.print fibbonacci using recursion\n");
        printf("2.print fibbonacci without using recursion\n");
        printf("press q to exit: ");
        scanf("%c",&choice);
        printf("\n");

        if (choice == 'q') {
            printf("exiting soon...\n");
            goto end;
        } else if (choice == '1') {
            fibbonacci_print(choice);
        } else if (choice == '2') {
            fibbonacci_print(choice);
        } else {
            printf("please choose correct option!\n");
        }
        /*
        switch (choice){
            case 'q':
                printf("exiting soon...\n");
                goto end;
            case '1':
                fibbonacci_print(choice);
                break;
            case '2':
                fibbonacci_print(choice);
                break;
            default:
                printf("choose correct option!\n");
                break;
        }
        */

       // i tried this both switch and if else statements
       // but both of them are creating an extra non-inputable menu
       // i don't know how but it is not fixed till now
              
        
    }

    end:
        return 0;
}

int fibbonacci_print(char choice){
    int num;

    /*
    if (choice == '1') {
        int func = nth_fibbonacci_using_recursion;
    } else if (choice == '2') {
        int func = nth_fibbonacci_using_iteration;
    }
    // currently i don't know how to store functions adress in pointer
    // and how to call it later on i will fix this program
    */

    printf("\nhow many series numbers needed: ");
    scanf("%d",&num);
    printf("\n");
    
    if (choice == '1') {
        
        for(int i=0; i< num; i++) {
            printf("%d number = %d\n",i+1, nth_fibbonacci_using_recursion(i));
        }
    } else if (choice == '2') {
        
        for(int i=0; i< num; i++) {
            printf("%d number = %d\n",i+1, nth_fibbonacci_using_iteration(i));
        }
    
    }
    return 0;
    
}

int nth_fibbonacci_using_recursion(int num){

    if (num == 1 || num == 0){
        return 0;
    } else if (num == 2) {
        return 1;
    } else {
        return nth_fibbonacci_using_recursion(num-2) + nth_fibbonacci_using_recursion(num-1);
    }
}

int nth_fibbonacci_using_iteration(int num) {
    int prev = 0, next = 1, temp;

    for (int i = 0; i<num; i++) {
        temp = next;
        next = next + prev;
        prev = temp;
    }

    return prev; 
}