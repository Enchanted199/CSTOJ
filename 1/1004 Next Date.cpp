#include <stdio.h>

int main() {
	int y1, m1, d1;
	//scan
	scanf("%d %d %d", &y1, &m1, &d1);
	//
	int mon[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y1 <= 0 ) {
		printf("Invalid date");
		return 0;
	}
	if (m1 <= 0 || m1 > 12) {
		printf("Invalid date");
		return 0;
	}
	if (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0) mon[2] = 29;
	if (d1 > mon[m1] || d1 <= 0) {
		printf("Invalid date");
		return 0;
	}
	//unexpect input
	if (d1 == mon[m1] && m1 == 12) {
		d1 = 1;
		m1 = 1;
		y1++;
	}
	else if (d1 == mon[m1]) {
		d1 = 1;
		m1++;
	}
	else {
		d1++;
	}
	//special situation
	printf("%d %d %d", y1,m1,d1);
	return 0;

}