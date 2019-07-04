#include<stdio.h>

char to_char(int input);

int main() {
	int input;
	scanf("%d", &input);
	printf("%c", to_char(input));
	return 0;
}
char to_char(int input) {
	char result = input + 48;
	return result;
}