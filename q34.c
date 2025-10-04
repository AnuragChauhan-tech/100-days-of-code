#include <stdio.h>
#include <math.h>


int isPrimeHelper(int n, int divisor) {
    if (divisor > sqrt(n))
        return 1; 
    if (n % divisor == 0)
        return 0; 
    return isPrimeHelper(n, divisor + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    if (isPrimeHelper(n, 2))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}