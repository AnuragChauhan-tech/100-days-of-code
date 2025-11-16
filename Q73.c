//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int n  , m ;// n is rows and m is coloumns
    printf("enter the no. of rows and columns:");
    scanf("%d %d",&n ,&m);
    printf("enter the elements of the matriz");
    int arr[n];
    int mat[n][m];

    
    for(int i = 0;i<n;i++){
        for(int i= 0;i<m;i++){
            scanf("%d",&mat);
        }

    }
    for(int i= 0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum = sum + mat[i][j];

        }
        arr[i]=sum;
        
    }
    printf("the sum of each row is :\n");
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;
}