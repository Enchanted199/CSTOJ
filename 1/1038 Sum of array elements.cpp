#include <stdio.h>
#include <string.h>

int main()
{
	int num[20];
	int result=0;
	scanf("%d", &num[0]);
	for (int i = 1; i <= num[0]; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 1; i <= num[0]; i++) {
		result += num[i];
	}
	printf("Sum of all elements stored in the array is : %d", result);
}