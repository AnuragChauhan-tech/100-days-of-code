#include <stdio.h>

// Recursive function to print binary representation
void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);  // Recursive call with the quotient
    }
    printf("%d", num % 2);     // Print the remainder
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
    } else {
        printBinary(num);
        printf("\n");
    }

    return 0;
}