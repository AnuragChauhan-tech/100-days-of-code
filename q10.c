//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main(){
    int s ,hr  ,min, sec ;
    printf("enter time in seconds:");
        scanf("%d", &s );
    hr=s/3600;
    min=(s%3600)/60;
    sec=(s%3600)%60;
    printf("hours: %d " ,  hr);
    printf("minutes: %d ", min);
    printf("seconds: %d ", sec);
    return 0;
}

//enter time in seconds:3661
//hours: 1 minutes: 1 seconds: 1 
//enter time in seconds:7322
//hours: 2 minutes: 2 seconds: 2