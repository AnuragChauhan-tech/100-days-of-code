//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main (){
    float celcius, farenheit;
    

    printf("Enter the temperature in celsius:");
    scanf("%f", &celcius);
    farenheit = (celcius * 9/5) + 32;
   
    printf("fahrenheit=%.2f", farenheit);
    return 0;

}
//out
//Enter the temperature in celsius:0
//fahrenheit=32.00
//Enter the temperature in celsius:100
//fahrenheit=212.00