#include <stdio.h>

int main() {
	int x, count = 0, flag = 0;
	scanf("%d", &x);
	for (int j = x; j > 1; j--) {
		for (int i = j - 1; i > 1; i--) {
			if (j%i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			flag = 0;
		}
		else {
			count++;
		}
	}
	printf("%d",count);
}