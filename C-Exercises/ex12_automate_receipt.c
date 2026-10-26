// replace {{tags}} in file

#include <stdio.h>
#include <string.h>

void replace_tags(char word[]);

int main() {

	FILE *fp = fopen("ex12_Letter.txt", "r");
	if (fp == NULL) {
		printf("File not found");
		return -1;
	}

	char string[1024];
	char word[64] = " ";
	int i = 0;

	for ( ; word[0] != '\0'; fscanf(fp, "%s", word) )  {
		replace_tags(word);
		strcat(string, word);
		strcat(string, " ");
		strcpy(word, "\0");
	}
	
	strcat(string, "\0");

	fclose(fp);
	
	FILE *out = fopen("ex12_out.txt", "w");
	fprintf(out, "%s", string);
	fclose(out);

	return 0;
}

void replace_tags(char word[]) {
	char name[] = "Harry";
	char item[] = "mouse";
	char outlet[] = "Computer Shop";
	
	if ( strcmp(word, "{{name}}") == 0) strcpy(word, name);
	else if ( strcmp(word, "{{item}}") == 0) strcpy(word, item);
	else if (strcmp(word, "{{outlet}}") == 0) strcpy(word, outlet);
	else if (strcmp(word, "{{outlet}}.") == 0){
		strcpy(word, outlet);
		strcat(word, "\n");
	}
}
