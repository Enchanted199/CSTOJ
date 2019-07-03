#include <stdio.h>

int main() {
	float p1, p2, p3, p4, p5, p6;
	scanf("%f %f %f %f %f %f", &p1, &p2, &p3, &p4,&p5, &p6);
	printf("%.2f %.2f", (p1 + p3 + p5) / 3, (p2 + p4 + p6 / 3));
}