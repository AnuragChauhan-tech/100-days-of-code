// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of row or columns) :");
    scanf("%d",&r);
    int mat1[r][r];
    int sum=0;
    

    printf("Enter elements of array 1: \n");
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            scanf("%d", &mat1[i][j]);
            if (i==j){
                sum = sum + mat1[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;


    //


}