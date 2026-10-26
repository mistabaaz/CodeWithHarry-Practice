// remove tags from the given html string

#include<stdio.h>

int tag_remover( char newStr[], char oldStr[] ) {
    // remove tags from str <> these ones

    int i = 0, j = 0, tags_count = 0;   

    while ( oldStr[i] != '\0' ) {  // run the loop until string ends

        while ( (oldStr[i] != '<') && (oldStr[i] != '\0')  ) {
            // until we mets opening of tag < copy the charcters
            // if the string ends or the opening tag < mets loop close
            newStr[j] = oldStr[i];
            j++; i++;

        } 

        tags_count++;  // we have met the opening tag of html

        while ( (oldStr[i] != '>') && (oldStr[i] != '\0') ) {
            // this will run if above loop closes it means we met the opening of tag <
            // so now until we met the closing of tag > we should continue  
            i++;

        }  i++; // needed to skip >

    }

    newStr[j] = '\0'; // for ending the string
    
    return tags_count;  // returns how much tags removed
}


int main() {

    char html_string[] = "<tittle> hello sir <tittle>";
    char string_without_tags[34];
    int tags_removed = tag_remover(string_without_tags, html_string);

    printf("Original string: %s\n", html_string);
    printf("After Removing %d tags :\n", tags_removed);
    printf("%s", string_without_tags);
    
    return 0;
}