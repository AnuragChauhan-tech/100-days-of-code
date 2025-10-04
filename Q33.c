#include <stdio.h>


int countDigits(int num) {
    if (num == 0)
        return 0;
    return 1 + countDigits(num / 10);
}


int sumOfCubes(int num, int digits) {
    if (num == 0)
        return 0;
    int digit = num % 10;
    return (digit * digit * digit) + sumOfCubes(num / 10, digits);
}

int main() {
    int num;
    scanf("%d", &num);

    
    if (num == 0) {
        printf("Armstrong\n");
        return 0;
    }

    int digits = countDigits(num);
    int sum = sumOfCubes(num, digits);

    if (sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}