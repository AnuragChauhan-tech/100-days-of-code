

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/



#include <stdio.h>


int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    int lastDigit = n % 10;         
    rev = rev * 10 + lastDigit;      
    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int reversed = reverseNumber(n, 0);
    printf("%d\n", reversed);

    return 0;
}