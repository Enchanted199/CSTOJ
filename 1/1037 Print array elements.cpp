#include <stdio.h>
#include <string.h>

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("Elements in array are: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}