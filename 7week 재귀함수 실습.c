#include <stdio.h>


void fac(int a) {
	if (a > 0) {
		fac(a / 2);
		printf("%d" ,a % 2);
	}


}

int main() {

	int a;

	printf("input int val:");
	scanf_s("%d", &a);
	fac(a);

	return a;
}
