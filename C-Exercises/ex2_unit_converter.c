// Unit Converter in C Language


/*
kms to miles   (1km = 0.621371 miles) [1km = 5/8 miles]
inches to foot (1 inch = 12 foot) 
pound to kgs  (1 pound = 0.454 kg)  [1 pound = 4/9 kg]
inches to meters  (1 inch = 0.0254 meter) [1 inch = 1/40 meters]
(exact) [approx]
*/

#include<stdio.h>

float kms_to_miles(float num) {
    return (num * 0.621371);
}

float inches_to_meters(float num) {
    return (num * 0.0254);
}

float inches_to_foot(float num) {
    return (num * 12);
}

float pound_to_kg(float num) {
    return (num * 0.454);
}

int main() {
    float num, value; int opt ;

    while (1) {

        printf("\n\t\tUnit Conversion\t\t\n");
        printf("1.Kilometers to miles\n");
        printf("2.Inches to meters\n");
        printf("3.Inches to foot\n");
        printf("4.Pounds to kilograms\n");
        printf("5.Exit\n\n");

        // printf("enter q, quit, exit to exit the program\n");
        printf("Choose from above options: ");
        scanf("%d", &opt);
        printf("\n");

        if (opt == 5) {
            break;
        }
        

        printf("Enter Value: ");
        scanf("%f",&num);
        printf("\n");

        if (opt == 1) {
            value = kms_to_miles(num);
            printf("%f kilometers = %f miles\n", num, value);
        }
        else if (opt == 2) {
            value = inches_to_meters(num);
            printf("%f inches = %f meters\n", num, value);
        }
        else if (opt == 3) {
            value = inches_to_foot(num);
            printf("%f inches = %f foot\n", num, value);
        }
        else if (opt == 4) {
            value = pound_to_kg(num);
            printf("%f pounds = %f kilograms\n", num, value);
        }
        else {
            printf("choose correct option!\n");
        }
    }
    return 0;

}