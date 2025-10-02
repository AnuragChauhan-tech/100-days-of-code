#include <stdio.h>

// Function to reverse the number recursively
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num, reversedNum;

    // Read input number
    scanf("%d", &num);

    // Reverse the number using recursion
    reversedNum = reverseNumber(num, 0);

    // Check if the original number and reversed number are the same
    if (num == reversedNum)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}