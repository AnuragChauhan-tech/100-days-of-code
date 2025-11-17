//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
int main(){
 char string[100];
 printf("enter  the charaxters:");
 scanf("%s",string);
 int i =0;
 while(string[i]='\0'){
    printf("%s",string[i]);


 }
 return 0;
}