#include <stdio.h>

int main() {
	float g1, g2;
	float tg;//total grade
	//scan
	scanf("%f %f", &g1, &g2);
	if (g2 <= 30.0) {
		printf("F");
		return 1;
	}
	tg = 0.6 *g1 + 0.4*g2;
	if (tg >= 80.0) {
		printf("A");
	}
	else if (tg >= 65.0) {
		printf("B");
	}else if (tg >= 50.0) {
		printf("C");
	}else if (tg >= 40.0) {
		printf("D");
	}else{
		printf("F");
	}
}