#include <stdio.h>

int main() {
	int a, count=0;
	scanf("%d", &a);
	
	while (a != 1) {
		if (a % 2 == 0) {
			a /= 2;
			
		}
		else {
			a = 3 * a + 1;
		}
		count++;
	}
	printf("%d", count);
}
