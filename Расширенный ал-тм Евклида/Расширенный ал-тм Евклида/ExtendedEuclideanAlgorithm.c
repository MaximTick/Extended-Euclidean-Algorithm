#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	int p = 1, q = 0, r = 0, s = 1;
	int x, y;

	printf("input first variable: ");
	scanf("%d",	&a);
	printf("input second variable: ");
	scanf("%d", &b);

	while (a && b) {
		if (a >= b) {
			a = a - b;
			p = p - r;
			q = q - s;
		}
		else
		{
			b = b - a;
			r = r - p;
			s = s - q;
		}
	}
	if (a) {
		x = p;
		y = q;
	}
	else
	{
		x = r;
		y = s;
	}
	printf("Output %d and %d\n", x, y);
	return 0;
}