//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    int firstDigit, lastDigit, swappedNum;
    int temp = num;
    int count = 0;

    
    lastDigit = num % 10;

    
    count = (num == 0) ? 1 : (int)log10(num) + 1;
    firstDigit = num / (int)pow(10, count - 1);

    
    if (count <= 1) {
        swappedNum = num;
    } else {
        
        temp = num % (int)pow(10, count - 1); 
        temp = temp / 10;                    

        
        swappedNum = lastDigit * (int)pow(10, count - 1) + temp * 10 + firstDigit;
    }

    printf("%d\n", swappedNum);

    return 0;
}