//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main(){
    int n, count[10] = {0}, maxCount = 0, mostFrequentDigit; //count [10] to store count of digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &n);


    //Count the occurrences of each digit
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n =n /10;
    }

    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d occuring  %d times\n", mostFrequentDigit, maxCount);

    return 0;
}
