// check no. is pallindrome or not
#include <stdio.h>

int is_pallindrome(int);

int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	int res = is_pallindrome(num);
	if (res == 0) printf("%d is not pallindrome", num);
	else printf("%d is pallindrome",num);
	return 0;
}

int is_pallindrome(int num) {
	int rev = 0; int temp = num;
	while (temp != 0) {
		rev = rev*10 + temp % 10;
		temp = temp / 10;
	}
	if (num == rev) return 1;
	else return 0;
}

