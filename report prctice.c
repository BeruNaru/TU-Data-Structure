
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int main(void) {
	int** table;
	int row = 1;
	int cullum = 9;
	int input_val = 0;

	printf("input cullum count: \n");
	printf("cullum count = ");
	scanf_s("%d", &cullum);

	table = (int**)calloc(cullum, sizeof(int));
	//*(table[cullum]) 1차원 포인터, 아직 변수 데이터가 존재하지 않음 


	printf("%d\n", cullum);

	printf("input row count: \n");
	printf("row count = ");
	scanf_s("%d", &row);

	for (int i = 0; i < cullum; i++) {
		for (int j = 0; j < row; j++) {
			printf("input int val:");
			scanf_s("%d", &table[i][j]);
		}
		table[i] = calloc(row, sizeof(int));
	}
	    printf("%d\n", row);
	for (int i = 0; i < cullum; i++) {
		for (int j = 0; j < row; j++) {
			printf("table_val[%d][%d] = 2%d", i, j, table[i][j]);

		}
		printf("\n");
	}

	return 0;
}
