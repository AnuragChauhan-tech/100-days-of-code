#include <stdio.h>

int main() {
    int late_days;
    int fine = 0;

    
    printf("Enter number of days late: ");
    scanf("%d", &late_days);

    if (late_days > 30) {
      
        printf("Membership Cancelled\n");
    } else if (late_days > 10) {
        
        int remaining_days = late_days - 10;
        fine = (5 * 2) + (5 * 4) + (remaining_days * 6);
        printf("Fine ₹%d\n", fine);
    } else if (late_days > 5) {
        
        int remaining_days = late_days - 5;
        fine = (5 * 2) + (remaining_days * 4);
        printf("Fine ₹%d\n", fine);
    } else if (late_days > 0) {
       
        fine = late_days * 2;
        printf("Fine ₹%d\n", fine);
    } else {
                printf("No fine\n");
    }

    return 0;
}