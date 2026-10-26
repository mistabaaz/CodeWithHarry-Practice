// remove tags from the given html string

#include<stdio.h>

typedef struct tag_removed_string {
    char *str;  // string without tag
    int tags;  // how much tags removed
} sstr; // secial string type

sstr tag_remover(char str[], int len) {
    // remove tags from str <> these ones

    int i = 0, j = 0, tags_count;  
    // char newStr[len];  // for each character and for storing str without tags
    char newStr[len] ;
    sstr value = { newStr, 0};

    while ( str[i] != '\0' ) {  // run the loop until string ends

        while ( (str[i] != '<') && (str[i] != '\0')  ) {
            // until we mets opening of tag < copy the charcters
            // if the string ends or the opening tag < mets loop closes
            printf("str[i] %c ", str[i]);
            value.str[j] = str[i];
            printf("newStr[j] %c ", value.str[j]);
            j++; i++;
        } 
        value.tags++;  // we have met the opening tag of html

        while ( (str[i] != '>') && (str[i] != '\0') ) {
            // this will run if above loop closes it means we met the opening of tag <
            // so now until we met the closing of tag > we should continue  
            i++;
            printf("str[i] %c ", str[i]);
            printf("newStr[j] %c ", value.str[j]);
        }  i++; // needed to skip >

    }

    value.str[j] = '\0'; // for ending the string
    
    return value;  // returns the addres of string without tags and how much tags removed
}


int main() {
    char html_string[] = "<tittle> hello sir <tittle>";

    sstr str_without_tags = tag_remover(html_string, 32);
    printf("original string : %s\n", html_string);
    printf("tags removed string : %s\n", str_without_tags.str);
    printf("%d tags removed\n", str_without_tags.tags);
    
    return 0;
}

/*
the error in the program is variable deleted itself after function ends
so string i am trying to return from tags_remover function is already deleted
thats why you can see the value of string is assigning correctly but after funciton ends
its prints garbage :(

if you are thinking that then why return works on integer like int num; return num; why this works

so here is explanation return returned it value from num which is 5 or something

but in this case string is array of characters so char arr[5] ;  creating this create string array
but acessing arr gives addres of first character means ( arr == &arr[0]) 
here is the catch means function is not returning string its returning the address of first char
which means adress of a local variable which is already deleted after function call ends :) 

now i got to know why there is not a simple funciton like
char str2[5]; str2 = strcopy("hello");  // like these because function cannot return string at all 
thats why they ask you desstination (means memory address) to store that string 
strcpy(str2, "hello"); // like this 

hopefully you understand what i am sayiing

*/

/* sorry for again bad learning now i learned about static variables
that can solve this type of problem but not actually :)
*/