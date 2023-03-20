#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[7][5] = { 0, };
	int i, j;
	int val = 1;


	printf("7x5 table int val:\n");

	for (i = 0; i < 7; i++) {
		for (j = 0; j < 5; j++) {
			array[i][j] = val++;
		}
	}

	printf("result, \n");

	for (i = 0; i < 7; i++) {

		for (j = 0; j < 5; j++) {
			printf("array[%d][%d]=2%d ", i, j, array[i][j]);
		}
	}
		return 0;

	}

//메모리 할당 및 배열 
