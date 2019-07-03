#include <stdio.h>
void sub(char*name, int id, int s1, int s2, int s3);
int main() {
	char name[15];
	int id, s1, s2, s3;
	scanf("%s %d %d %d %d", name, &id, &s1, &s2, &s3);
	sub(name, id, s1, s2, s3);
}

void sub(char*name, int id, int s1, int s2, int s3) {
	printf("%s %d %d %d %d", name, id, s1, s2, s3);
}
