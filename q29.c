

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1; 
    else
        return n * factorial(n - 1); 
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("%d\n", result);
    return 0;
}