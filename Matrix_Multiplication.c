#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &row2, &col2);

    if(col1 != row2) {
        printf("Matrix multiplication is not possible!");
        return 0;
    }

    int a[row1][col1];
    int b[row2][col2];
    int c[row1][col2];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {

            c[i][j] = 0;

            for(int k = 0; k < col1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}