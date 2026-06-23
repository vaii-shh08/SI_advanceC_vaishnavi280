#include <stdio.h>

int main() {
    int row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col];
    printf("Enter first matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(a[i][j] != b[i][j]) {
                printf("Matrices are Not Equal");
                return 0;
            }
        }
    }
    printf("Matrices are Equal");
    return 0;
}