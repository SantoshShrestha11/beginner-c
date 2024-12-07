#include <stdio.h>
int main(){
    int matrix1[2][2],matrix2[2][2],matrix3[2][2];
    printf("Enter the elements of the first matrix:\n"); // using loops for taking input of the values of the matrix in each position
    for(int i=0; i<2;i++) {
        for(int j=0; j<2;j++) {
            printf("Element for the position [%d][%d]:",i+1,j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int i=0; i<2;i++) {
        for(int j=0; j<2;j++) {
            printf("Element for the position [%d][%d]:",i+1,j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
// using the loops for adding matrix1 and then matrix2 and putting the value in the third matrix matrix3
    for(int i=0; i<2;i++) {
        for(int j=0; j<2;j++) {
            matrix3[i][j] = matrix1[i][j]=matrix2[i][j];
        }
    }

// at the end using the for loop for printing the sum 
    printf("The sum of the two matrix is :\n");
    for(int i=0; i<2;i++) {
        for(int j=0; j<2;j++) {
        printf("%4d",matrix3[i][j]) ;
        }
        printf("\n");

    }

    return 0;
}
