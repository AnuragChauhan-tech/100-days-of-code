Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not a perfect number (input must be a positive integer)\n");
        return 0;
    }

    int sum_of_divisors = 1; 

    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
            if (i * i != num) {
                sum_of_divisors += (num / i);
            }
        }
    }

    if (sum_of_divisors == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}