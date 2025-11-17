//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main(){

    int n, m;
    
    printf("Enter the number of rows and columns : \n");
    scanf("%d %d", &n, &m);
    int mat[n][m];
    printf("Enter matrix elements: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int totalDiagonals = n+m - 1;

    for (int k = 0; k < totalDiagonals; k++){
        int temp[n + m], o = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == k) { // condition in diagonals their sum of column and row is equal
                    temp[o++] = mat[i][j];
                }
            }
        }

        if (k % 2 == 0) { // even diagonals go right up 
            for (int x = o-1; x >= 0; x--) {
                printf("%d ", temp[x]);
            }
        } else {
            for (int x = 0; x < o; x++) {
                printf("%d ", temp[x]);
            }
        }
    }

    return 0;
}