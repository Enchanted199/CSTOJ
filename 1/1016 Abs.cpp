#include<stdio.h>

int abs(int input);

int main() {
	int input;
	scanf("%d", &input);
	printf("%d", abs(input));
	return 0;
}
int abs(int input) {
	return input >= 0 ? input : -input;
}