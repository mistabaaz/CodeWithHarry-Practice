// simple c program to take details of drivers in travel agency

#include<stdio.h>
#include<string.h>

struct drivers {
    // structure for drivers details
    char name[25];
    char license_no[25];
    char route[52];
    float kms;
};

int number_of_drivers(void); // returns number of drivers in travel agency
int take_details(struct drivers *data, int size); // will take details of drivers from user
void print_details(struct drivers *data, int size); // print drivers details in good format
void remove_newline(char str[]); // as you can see from name
void prettify(char str[], int block_size); // make the string to fit into table


int main() {
    int num = number_of_drivers();
    struct drivers data[num];  // our drivers details array

    take_details(data, num);  // function for taking details from user
    print_details(data, num);  // print the details in good format

    return 0;
}

int number_of_drivers(void) {
    // user input for how many driver's detail he/she want to enter

    int num;
    printf("How many drivers are there: ");
    scanf("%d", &num);
    getchar(); // for \n character left by scanf
    printf("\n");

    return num;
}

int take_details(struct drivers *data, int size) {
    // take details of user one by one

    for (int i = 0; i < size; i++) {

        printf("\nEnter details of driver no %d\n", i + 1);
        printf("Enter Name: ");
        fgets(data[i].name, 25, stdin);
        printf("\nEnter Driving License No: ");
        fgets(data[i].license_no, 25, stdin);
        printf("\nEnter route (from where to where) : ");
        fgets(data[i].route, 52, stdin);
        printf("\nEnter distance of route (in kms) : ");
        scanf("%f", &data[i].kms);
        getchar(); // for \n character left by scanf
        printf("\n");
         
        remove_newline(data[i].name);
        remove_newline(data[i].license_no);
        remove_newline(data[i].route);
    }

    printf("All Details are successfully parsed of %d drivers\n", size);

    return 0;
}

void remove_newline(char str[]) {
    int len = strlen(str);
    str[len - 1] == '\n' ? str[len - 1] = '\0' : 0; // removes the newline
    return;
}

void print_details(struct drivers *data, int size) {
    // print the details in better format
    char temp[52];

    printf("\n---------------------------------------------------------------------------\n");
    printf("|        Name        |     License No     |        Route       | Distance |\n");
    printf("|-------------------------------------------------------------------------|\n");

    for (int i = 0; i < size; i++) {

        strcpy(temp, data[i].name);
        prettify(temp, 20);  // prettified the name
        printf("|%s|", temp );

        strcpy(temp, data[i].license_no);
        prettify(temp, 20);  // prettified the license no
        printf("%s|", temp );

        strcpy(temp, data[i].route);
        prettify(temp, 20);  // prettified the route
        printf("%s|", temp );

        sprintf(temp, "%0.2f", data[i].kms); // copy value of var using fromated string 
        prettify(temp, 10); // also prettified the float number
        printf("%s|\n", temp );  // printed distance as it is
        
    }

    printf("|-------------------------------------------------------------------------|\n\n");

    return;
}

void prettify(char str[], int block_size) {
    int len = strlen(str);
    
    while ( strlen(str) < block_size ) {
        len = strlen(str);
        for (int i = 0; i < len; i++) {

            str[len - i] = str[len - i - 1]; // shifting chars to the right

        }
        str[0] = ' '; // added 1 space in front
        str[len + 1] = ' '; // added 1 space in last for balancing
        str[len + 2] = '\0'; // added null character
    }
    len = strlen(str); // updated length

    if (len == ( block_size + 1) ) {
        // plus one or minus one difference can occur
        // in prettified string due to odd or even character these
        // if else blcok  will fix this
        str[len - 1] = '\0' ;

    } else if (len == ( block_size - 1) ) {
        str[len] = ' ';
        str[len + 1] = '\0' ;
    }

    return;
}

