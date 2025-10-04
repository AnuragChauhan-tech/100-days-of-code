#include <stdio.h>


void printFactors(int num, int current) {
    if (current > num)
        return; 
    if (num % current == 0)
        printf("%d ", current); 
    printFactors(num, current + 1); 
}

int main() {
    int num;
    scanf("%d", &num);

    printFactors(num, 1);
    printf("\n");
    return 0;
}