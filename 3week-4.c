#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main(void) {
	int* a = NULL;

	a = calloc(1, sizeof(int));
	*a = 10;

	printf("a=%d\n", *a);

	return 0;

}
//메모리할당 
