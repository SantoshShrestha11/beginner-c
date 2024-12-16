#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the order of the first matrix\n");
    printf("Enter the number of rows for the first matrix = ");
    scanf("%d", &a);
    printf("Enter the number of columns for the first matrix = ");
    scanf("%d", &b);

    printf("Enter the order of the second matrix\n");
    printf("Enter the number of rows for the second matrix = ");
    scanf("%d", &c);
    printf("Enter the number of columns for the second matrix = ");
    scanf("%d", &d);

    if (b != c) {
        printf("Matrix multiplication error!!!\nYou can't multiply these matrices. They have invalid orders.\n");
        return 1;
    }

    int matrix1[a][b], matrix2[c][d], matrix3[a][d];

    printf("Enter the elements of the first matrix.\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {  
            printf("Element for the position [%d][%d]:", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix.\n");
    for(int i = 0; i < c; i++) {  
        for(int j = 0; j < d; j++) { 
            printf("Element for the position [%d][%d]:", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < d; j++) {
            matrix3[i][j] = 0;
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < d; j++) {
            for(int k = 0; k < b; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < d; j++) {
            printf("%4d", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}