Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/ 

#include <stdio.h>


int onesComplement(int n) {
    if (n == 0) {
        
        return 0;
    }
    int lastBit = n % 10;
    int flippedBit;

    if (lastBit == 0) {
        flippedBit = 1;
    } else {
        flippedBit = 0; 
    }

    
    return onesComplement(n / 10) * 10 + flippedBit;
}

int main() {
    int binaryNumber;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    int result = onesComplement(binaryNumber);

    printf("1's complement: %d\n", result);

    return 0;
}