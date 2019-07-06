#include <stdio.h>

int BC(int a, int b);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", BC(a, b));
}

int BC(int a, int b) {
	if (b > a) {
		return 0;
	}
	if (a == b) {
		return 1;
	}
	if (b == 1) {
		return 1;
	}
	return BC(a - 1, b - 1) + BC(a - 1, b);
}
