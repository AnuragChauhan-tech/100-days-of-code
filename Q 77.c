// Checking  if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows(= columns) :");
    scanf("%d",&r);
    int mat1[r][r];
    

    printf("Enter elements of array 1: \n");
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            scanf("%d", &mat1[i][j]);//storing elements of matrix
    }

    int diagonalArr[r];
    for (int i=0;i<r;i++){
        
        diagonalArr[i] = mat1[i][i];


    }
    //checking if diagonal is distinct or not
    for (int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            if (diagonalArr[i] == diagonalArr[j]){
                printf("Diagonals are not distinct");
                return 0;
            }
        }

    }
    printf("Diagonals are distinct");
    return 0;

}