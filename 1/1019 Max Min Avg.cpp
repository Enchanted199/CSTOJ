#include<stdio.h>

int min(int *in);
int max(int *in);
float avg(int *in);

int main() {
	int in[10];
	for (int ctr = 0; ctr < 10; ctr++)
		scanf("%d", &in[ctr]);
	printf("%d %d %f", min(in), max(in), avg(in));
	return 0;
}
int min(int *in) {
	int temp = in[0];
	for (int i = 1; i < 10; i++) {
		if (in[i] < temp) {
			temp = in[i];
		}
	}
	return temp;
}
int max(int *in) {
	int temp = in[0];
	for (int i = 1; i < 10; i++) {
		if (in[i] > temp) {
			temp = in[i];
		}
	}
	return temp;
}
float avg(int *in) {
	float result = 0;
	for (int i = 0; i < 10; i++) {
		result += in[i];
	}
	return result / 10;
}