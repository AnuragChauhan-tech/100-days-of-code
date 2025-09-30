//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    
    float costPrice, sellingPrice;

    
    printf("Enter the cost price and selling price separated by space: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    
    if (sellingPrice > costPrice) {
        float profitAmount = sellingPrice - costPrice;
        
        float profitPercent = (profitAmount / costPrice) * 100;

        
        printf("Profit %.0f%%\n", profitPercent);
    }
    
    else if (sellingPrice < costPrice) {
        float lossAmount = costPrice - sellingPrice;
        
        float lossPercent = (lossAmount / costPrice) * 100;

        
        printf("Loss %.0f%%\n", lossPercent);
    }
    
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
