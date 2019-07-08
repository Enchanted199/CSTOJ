#include <stdio.h>

int main() {
	char a[50];
	int count=0;
	gets(a);
	for (int i = 0; i < 50; i++) {
		if (a[i] == '\0') break;
		count++;
	}
	printf("Length of the string is : %d", count);
}

