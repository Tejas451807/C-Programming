  // Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/ //

#include<stdio.h>
int main() {
    int num1 = 10 , num2 = 2;
    printf("Sum of num1 and num2 is %d \n" , num1 + num2);
    printf("Diff of num1 and num2 is %d \n" , num1 - num2);

     int num3 = 7 , num4 = 3;

printf("Product of num1 and num2 is %d \n" , num3 * num4);
printf("Quotient of num1 and num2 is %d \n" , num3 / num4);
return 0;
}