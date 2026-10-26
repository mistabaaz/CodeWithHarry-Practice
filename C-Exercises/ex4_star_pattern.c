// triangles pattern in c language

#include<stdio.h>

int triangle_pattern(int num);
int inverted_triangle_pattern(int num);

int main() {
    int choice;

    while (1) {

        // menu for type of star
        printf("\n\t***StarPrinting***\t\n");
        printf("1.Triangle\n");
        printf("2.Inverted Triangle\n");
        printf("3.Exit\n");
        printf("choose from above option: ");
        scanf("%d",&choice);
        printf("\n");

        if (choice == 3){
            break;
        }

        if (choice == 1) {
            int num;

            // triangle pattern
            printf("\nhow many lines of triangle: ");
            scanf("%d",&num);
            printf("\n");
            triangle_pattern(num);

        } else if (choice == 2) {
            int num;
            
            // inverted triangle pattern
            printf("\nhow many lines of triangle: ");
            scanf("%d",&num);
            printf("\n");
            inverted_triangle_pattern(num);

        } else {
            printf("please choose correct option!\n");
        }

    }

    return 0;

}

int triangle_pattern(int num) {
    // triangle pattern

    char c = '*';
    
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c",c);
        }
        printf("\n");
    }
    
    return 0;
}

int inverted_triangle_pattern(int num) {
    // inverted triangle patter
    
    char c = '*';
    
    for (int i = num; i > 0; i = i - 1) {
        for (int j = 0; j < i; j++) {
            printf("%c",c);
        }
        printf("\n");
    }

    return 0;
}