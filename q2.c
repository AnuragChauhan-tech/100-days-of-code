// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h> 
int main() {

    int a = 6, b = 3;
    printf("enter two numbers");
    printf("sum = %d", a + b);
    printf("subtract = %d", a - b);
    printf("multiply = %d", a*b);
    printf("divide = %d", a/b);
    return 0;
}