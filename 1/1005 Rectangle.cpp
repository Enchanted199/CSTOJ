#include <stdio.h>

int main() {
	float p1, p2, p3, p4;
	scanf("%f %f %f %f", &p1, &p2, &p3, &p4);
	printf("%.2f %.2f", (p1 - p3)*(p2 - p4), (p3 - p1 + p4 - p2) * 2);
}