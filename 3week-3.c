
#include <stdio.h>

int main(void) {

	int a[5];
	int i;
	int input_val;

	printf("input int val.\n");
	for (i = 0; i < 5; i++) {
		printf("input_val");
		scanf_s("%d", &a[i]);
	}
	//scanf_s("%d", &input_val);
	//a[i] = input_val;
	printf("yourinput int val.\n");
	for (i = 0; i < 5; i++) {

		printf("a[%d] =%d\n",i,  a[i]) //== printf("a[%d] =%d\n",i,  *(a+i));
	}

	return 0;
}
