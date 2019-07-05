#include <stdio.h>
int f(int a);
int main() {
	int a;
	scanf("%d", &a);
	printf("%d", f(a));

}
int f(int a) {
	if (a == 0)
		return 1;
	if (a == 1)
		return 1;
	return f(a - 1) + f(a - 2);
}