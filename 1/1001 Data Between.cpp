#include <stdio.h>

int main() {
	int y1, m1, d1;
	int y2, m2, d2;
	int result;
	//scan
	scanf("%d %d %d", &y2, &m2, &d2);
	scanf("%d %d %d", &y1, &m1, &d1);

	//
	int mon[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y1 != y2) {
		printf("Not in the same year");
		return 0;
	}
	if (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0) mon[2] = 29;
	else if (d1 > mon[m1] || d2 > mon[m2]) {
		printf("Invalid date");
		return 0;
	}
	if (m2 < m1) {
		printf("Invalid date");
		return 0;
	}
	if (m1 == m2) {
		printf("%d", d1 - d2);
		return 1;
	}
	result = d2;
	m2--;
	while (m1 < m2) 
		result += mon[m2--];
	result += mon[m1] - d1;
	printf("%d", result);
	return 0;

}
