#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) {
    int** table;
    int row = 0;
    int col = 0;

    printf("input number of cullums: ");
    scanf_s("%d", &col);

    table = (int**)calloc(col, sizeof(int*));
    if (table == NULL) {
        printf("메모리 할당실패");
        return -1;
    }

    printf("input the number of rows: ");
    scanf_s("%d", &row);

    for (int i = 0; i < col; i++) {
        table[i] = (int*)calloc(row, sizeof(int));
        if (table[i] == NULL) {
            printf("메모리 할당실패");
            return -1;
        }

        for (int j = 0; j < row; j++) {
            printf("input_val table[%d][%d]: ", i, j);
            scanf_s("%d", &table[i][j]);
        }
    }

    printf("\nThe table is:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < col; i++) {
        free(table[i]);
    }
    free(table);

    return 0;
}
