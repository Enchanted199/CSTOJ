#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	for (int i = x - 1; i > 1; i--) {
		if (x%i == 0) {
			printf("Not a prime");
			return 0;
		}
	}
	printf("Prime");
}