//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/


#include <stdio.h>
int main(){
    int i1,j1;
    printf("Enter Matrix type for first matrix : \n");
    scanf("%d %d", &i1, &j1);
    int mat1[i1][j1];
    printf("Enter matrix elements: \n");
    for (int a = 0; a<i1; a++){
        for (int b=0; b<j1; b++) {
            scanf("%d", &mat1[a][b]);
        }
    }

    int i2,j2;
    printf("Enter Matrix type for Matrix 2 (i2 j2): \n");
    scanf("%d %d", &i2, &j2);
    int mat2[i2][j2];
    printf("Enter matrix elements: \n");
    for (int a = 0; a < i2; a++){
        for (int b=0; b<j2 ; b++) {
            scanf("%d", &mat2[a][b]);
        }
    }

    if (j1 != i2){
        printf("Multiplication is not possible for these matrices as first{j1} is not equal to {i2}.");
    }
    else {
        int pmat[i1][j2];
       
        for (int a = 0; a < i1; a++){
            for (int b = 0; b < j2; b++){
                pmat[a][b] = 0;
            }
        }

        for (int a =0; a<i1; a++){
            for (int b = 0; b < j2; b++){
                for (int k = 0; k < j1; k++){
                    pmat[a][b] += mat1[a][k] * mat2[k][b];
                }
            }
        }
        printf("Product of matrix \n");
        for (int a = 0; a < i1; a++) {
            for (int b = 0; b < j2; b++) {
                printf("%d ", pmat[a][b]);
            }
            printf("\n");
        }
    }
}