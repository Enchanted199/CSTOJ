#include<stdio.h>

int main() {
	int x,count =0;
	scanf("%d", &x);
	while (x) {
		x = x / 10;
		count++;
	}
	printf("%d", count);
	
}
