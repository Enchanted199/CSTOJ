#include <stdio.h>

int main() {
	int y, m, d;
	char type;
	scanf("%c %d %d %d", &type, &y, &m, &d);
	if (type == 'c') {
		printf("%d.%d.%d", y, m, d);
	}
	else if (type == 'a') {
		printf("%d\/%d\/%d", m, d, y);
	}else if (type == 'e') {
		printf("%d\/%d\/%d", d, m, y);
	}else{
		return 0;
	}
	return 0;
}
