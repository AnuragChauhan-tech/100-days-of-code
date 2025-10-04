#include <stdio.h>


int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", sumOfDigits(number));
    return 0;
}