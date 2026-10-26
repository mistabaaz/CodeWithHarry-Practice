// to get the size of major data types in table format

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

struct text_block {
    char *text;
    int text_size;
};

typedef struct text_block block;  // for simple usage 

/*
block data = { "hello" , 5};
block headings[] = { {}, {}, {}};
block *rows[] = { { {"hello", 5} , {"hello2", 5} }, 
                    { {"hello", 5} , {"hello2", 5} } 
};
*/

void printTable(char *head_foot, block *headings, block **rows );  // and whooo this will print our table
block **createRows(int datatype_block_size, int sizeof_block_size); // this will help in creating rows
block *createHead(int datatype_block_size, int sizeof_block_size); // this will help in creating heading
void freeRows(block **rows); // this will free rows memory allocated
void freeHead(block *headings); // this will free hading memory allocated
void box_fitter( char *str , int box_size, char for_spaces);  // this will make the string to fit in box
char *header_footer( int datatype_block_size, int sizeof_block_size, char for_header);  
// above fun is actaully for -----

int main() {
    int datatype_block_size = 20;
    int sizeof_block_size = 7;

    char style = '-';
    char *header = header_footer(datatype_block_size, sizeof_block_size, style);

    block *headings = createHead( datatype_block_size, sizeof_block_size );  // create our heading

    block **rows = (block**) createRows(datatype_block_size, sizeof_block_size);  // make our rows

    // printf("temp_row: %s", (*( (*(tows + 1)) + 0)).text);

    printTable(header, headings, rows);  // this will print in table format
    freeRows(rows);  // this will free rows allocated memory
    freeHead(headings); // this will free headings allocated memory
    free(header);  // this will free header string memory

    return 0;
}

void printTable(char *head_foot, block *headings, block **rows ) {
    int number_of_datatypes = 12;  
    int elements_in_row = 2;  
    char style = ' ';  // we need space to fill box

    /*printing the table format*/
    printf("\n\n%s\n", head_foot);    // start

    for (int i = 0; i < elements_in_row; i++) {
        // printing heading in correct manner

        box_fitter(headings[i].text , headings[i].text_size, style);
        if (i == 0) {
            printf("|%s|", (*headings).text);
        } else {
            printf("%s|", ( *(headings + i) ).text);
        }

    }

    printf("\n");  // after completing a row
    printf("|%s|\n", &head_foot[2]);  // for heading footer

    for (int i = 0; i < number_of_datatypes; i++) {
        // printing rows in correct manner

        for (int j = 0; j < elements_in_row; j++) {
            // printing elements of row in correct manner

            block text_block = (*( (*(rows + i) ) + j ) );
            box_fitter(text_block.text , text_block.text_size, style);
            if (j == 0) {
                printf("|%s|", text_block.text);
            } else {
                printf("%s|", text_block.text);
            }

        }
        printf("\n");  // after completing a row
    }

    printf("%s\n\n", head_foot);    // end

    return ;
}

block **createRows(int datatype_block_size, int sizeof_block_size) {

    int number_of_rows = 12; // 12 datatypes are here 
    size_t size_of_row = sizeof (block *);  // size of adress which stores row (actually a block)

    block **rows;   // simillar to arrays of rows
    rows = (block **) malloc( number_of_rows * size_of_row );  // allocated memory to rows

    if (rows == NULL) {
        printf("Rows memory can't be allocated!\n");
        printf("size : %lu\n", number_of_rows * size_of_row );
        return NULL;  
    }

    int elements_in_row = 2; // data type & size
    size_t size_of_block = sizeof (block);  // size of a single block

    int number_of_datatypes = 12;  

    char *datatypes_array[12] = {"int", "unsigned int", "short int", "unsigned short int", "long int", "unsigned long int",
                                "float", "double", "long double",
                                "char", "unsigned char",
                                "void"};

    size_t size_of_datatypes[12] = { sizeof (int), sizeof (unsigned int), sizeof (short int), sizeof (unsigned short int), sizeof (long int), sizeof (unsigned long int),
                                                    sizeof (float), sizeof (double), sizeof (long double),
                                                    sizeof (char), sizeof (unsigned char),
                                                    sizeof (void)}; 

    for (int i = 0; i < number_of_datatypes; i++) {
        /*creating temp row*/
        block *temp_row; // temporary pointer for storing one row at a time
        temp_row = (block *) malloc( elements_in_row * size_of_block ); // allocated memory for a single row

        if (temp_row == NULL) {
            printf("memory to a single row can't allocated!\n");
            printf("size : %lu\n", elements_in_row * size_of_block );
            return NULL;  
        }

        char *temp = (char *) malloc( (datatype_block_size + 1) * 1); // size of char is 1 byte

        if (temp == NULL) {
            printf("datatype string memory allocation error!\n");
            printf("size : %d\n", datatype_block_size + 1 );
            return NULL;  
        }   

        // *temp = datatypes_array[i];  
        strcpy(temp, datatypes_array[i] );  // stored value in heap
        // printf("temp: %s", temp);
        // printf("local array: %s", datatypes_array[i]);

        (*(temp_row)).text = temp;  // data type  of first element in row
        (*(temp_row)).text_size = datatype_block_size;
        // printf("temp_row: %s", (*(temp_row)).text);
    
        char *temp_int_to_string = (char *) malloc( (sizeof_block_size + 1) );  // 2 for int + 1 for \0

        if (temp_int_to_string == NULL) {
            printf("datatype size string memory allocation error!\n");
            printf("size : %d\n", sizeof_block_size + 1 );
            return NULL;  
        } 

        sprintf(temp_int_to_string, "%lu", size_of_datatypes[i] );  // converted size of datatype into string

        (*(temp_row + 1)).text = temp_int_to_string;  // sizeof datatype  of first element in row
        (*(temp_row + 1)).text_size = sizeof_block_size;

        *(rows + i) = temp_row;  // stored 1st row in rows successfully
        // printf("temp_row: %s", (*( (*(rows + i)) + 1)).text);
    }
    // printf("temp_row: %s", (*( (*(rows + 4)) + 0)).text);
    return rows;    
}

block *createHead( int datatype_block_size, int sizeof_block_size ) {
    int number_of_headings = 2; // datatypes and size

    block *headings;   // simillar to arrays of blocks
    headings = (block *) malloc( number_of_headings * sizeof (block) );  // allocated memory to blocks

    if (headings == NULL) {
        printf("allocating memory error in heading!\n");
        printf("size : %lu\n", number_of_headings * sizeof (block) );
        return NULL;  
    }

    char *heading1 = (char *) malloc( (datatype_block_size + 1) * 1); // size of char is 1 byte
    // *heading1 = "DATA TYPE";
    strcpy(heading1, "DATA TYPE");

    ( *(headings) ).text = heading1;
    ( *(headings) ).text_size = datatype_block_size;
    // stored 1st heading successfully

    char *heading2 = (char *) malloc( (sizeof_block_size + 1) * 1); // size of char is 1 byte
    // *heading2 = "SIZE";
    strcpy(heading2, "SIZE");

    ( *(headings + 1) ).text = heading2;
    ( *(headings + 1) ).text_size = sizeof_block_size;
    // stored 2nd heading successfully

    return headings;
}

void freeRows(block **rows) {

    int number_of_datatypes = 12; 
    int elements_in_row = 2;

    for (int i = 0; i < number_of_datatypes; i++) {
        
        for (int j = 0; j < elements_in_row; j++) {
            // firstly we will clear text in blocks
                                        // (*( (*(rows + i)) + 1)).text)
           char *block_text_pointer =  (*( (*(rows + i) ) + j ) ).text;

           free( block_text_pointer );  // we have cleared temp datatypename
           // and temp_int_to_str size of datatype when j = 1

        }       

        // now we have cleared our two blocks in first row
        // so now clear the first row

        block *row = *(rows + i);

        free( row );  // we have cleared our temp_row

    }

    // now we can clear our rows
    free( rows );

    return;

}

void freeHead(block *headings) {

    int number_of_headings = 2;  // datatype and size
    
    for (int i = 0; i < number_of_headings; i++) {
        // firstly we will clear text in blocks

        char *block_text_pointer =  ( *( headings + i ) ).text;

        free( block_text_pointer );  // we have cleared heading1 and heading2

    }

    // now we can clear our headings
    free( headings );

    return;

}

void box_fitter( char *str, int box_size , char for_spaces) {
    int len = strlen(str);
    
    while ( strlen(str) < box_size ) {
        len = strlen(str);
        for (int i = 0; i < len; i++) {

            str[len - i] = str[len - i - 1]; // shifting chars to the right

        }
        str[0] = for_spaces; // added 1 space in front
        str[len + 1] = for_spaces; // added 1 space in last for balancing
        str[len + 2] = '\0'; // added null character
    }
    len = strlen(str); // updated length

    if (len == ( box_size + 1) ) {
        // plus one or minus one difference can occur
        // in prettified string due to odd or even character these
        // if else blcok  will fix this
        str[len - 1] = '\0' ;

    } else if (len == ( box_size - 1) ) {
        str[len] = for_spaces;
        str[len + 1] = '\0' ;
    }

    return;
}

char *header_footer( int datatype_block_size, int sizeof_block_size, char for_header) {
    // length of -- is datatypes_block_size + sizeof_block_size  + 1 + 2 + 1
    // + 1 for seperator + 2 for both ends + 1 for null character
    int actual_size = datatype_block_size + sizeof_block_size + 4;

    char *str = (char *) malloc(actual_size); // created our string

    if (str == NULL) {
        printf("heaader_footer memory can't be allocated!\n");
        printf("size : %d\n", actual_size );
        return NULL;  
    }

    str[0] = '\0';
    box_fitter(str, actual_size - 1, for_header);

    return str;

}
