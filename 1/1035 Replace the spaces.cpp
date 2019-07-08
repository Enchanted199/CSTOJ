#include <stdio.h>

int main() {
	char a[50];
	char rep;
	int count=0;
	gets(a);
	scanf("%c", &rep);
	for (int i = 0; i < 50; i++) {
		if (a[i] == ' ') a[i]= rep;
	}
	printf("After replacing the space with the new character, the string is :\n%s", a);
}
