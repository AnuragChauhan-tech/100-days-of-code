//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/



#include <stdio.h>
int main(){
    char string[100];//only 100 characters can be stored
    printf("Enter the string: ");
    scanf("%s",string);//stores input 
    int len=0;//length initialization 
    int i=0;
    while (string[i] != '\0'){//as at the end of every string null character is present 
        len= len+1;
         i=i+1;
    }
    printf("Length of the string is: %d",len);
    return 0;
}