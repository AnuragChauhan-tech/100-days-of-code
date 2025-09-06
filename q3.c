// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main() {
    int  L ;
    int B ;
    printf("enter the length and breadth of rectangle");
    scanf("%d %d", &L, &B);
   
    printf("area of rectangle = %d", L*B);
    printf("perimeter of rectangle= %d" , 2*(L+B));
    return 0;

}