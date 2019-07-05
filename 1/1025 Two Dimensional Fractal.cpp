#include <stdio.h>
int num2(int a);
int blank(int a, int i);
int main() {
	int a, count=0;
	scanf("%d", &a);
	for (int i = num2(a); i >= 1; i = i / 2) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < blank(num2(a), i); k++) {
				printf("  ");
			}
			for (int k = 0; k < i; k++) {
				printf("* ");
			}
			printf("\n");
		}
		
	}
	
}
int num2(int a) {
	int result = 1;
	for (int i = 1; i < a; i++) {
		result *= 2;
	}
	return result;
}
int blank(int a, int i) {
	if (a == i) {
		return 0;
	}
	return a + blank(a /2,i);
}
