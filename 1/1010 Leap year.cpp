#include <stdio.h>

int main() {
	int y1;
	scanf("%d", &y1);
	if (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0) {
		printf("Leap year");
	}
	else {
		printf("Not a leap year");
	}
}