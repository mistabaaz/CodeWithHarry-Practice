// command line utility 

#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		printf("usage: %s add 5 7", argv[0]);
		return -1;
	}
	
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	int res;
	if (strcmp(argv[1], "add")==0) res = a + b;
	else if (strcmp(argv[1],"sub") == 0) res= a-b;
	else if (strcmp(argv[1], "mult") == 0) res = a*b;
	else if (strcmp(argv[1], "div") ==0) res = a / b;
	printf("result = %d", res);
	return 0;
}
