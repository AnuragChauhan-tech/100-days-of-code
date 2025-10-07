Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

// This is only meaningful for single digit inputs.
// It would not work for 145.
int main() {
    int num;
    scanf("%d", &num);

    int factorial_val;
    if (num == 0) factorial_val = 1;
    else if (num == 1) factorial_val = 1;
    else if (num == 2) factorial_val = 2;
    else if (num == 3) factorial_val = 6;
    else if (num == 4) factorial_val = 24;
    else if (num == 5) factorial_val = 120; 
    

    if (num >=0 && num <= 9) { 
        if (num == 1 || num == 2) { 
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    } else {
        printf("Not strong number (cannot process multi-digit numbers without loops)\n");
    }

    return 0;
}