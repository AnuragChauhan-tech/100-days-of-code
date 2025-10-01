//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
*/
#include <stdio.h>


int productOfEvens(int n) {
    if (n < 2)
        return 1;
    if (n % 2 != 0)
        return productOfEvens(n - 1);
            else
        return n * productOfEvens(n - 2); 
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = productOfEvens(n);
    printf("%d\n", result);
    return 0;
}
