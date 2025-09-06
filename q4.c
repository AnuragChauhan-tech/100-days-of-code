// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main () {
    float r , area, circumference;
    float pi = 3.14;
    printf("enter the radius of circle:");
    scanf("%f", &r);
    area = pi * r * r;
    circumference = 2 * pi * r;
    printf("Area=%.2f, Circumference=%.2f", area, circumference);
    return 0;
}
// enter the radius of circle:7
//Area=153.86, Circumference=43.96
//nter the radius of circle:3
//Area=28.26, Circumference=18.84
//PS D:\Programming in c\ALL C FILES\newgit\100-days-of-code> 