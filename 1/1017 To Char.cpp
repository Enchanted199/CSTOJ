#include<stdio.h>

char to_char(int input);

int main() {
	int input;
	scanf("%d", &input);
	printf("%c", to_char(input));
	printf("%d",-10/20)
	return 0;
}
char to_char(int input) {
	char result = input + 48;
	return result;
}
-