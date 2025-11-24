// Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/ //


#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the number 1\n ");
    scanf("%d", &num1);

    printf(" Enter the number 2\n");

    scanf("%d" , &num2);

    printf("The sum of the two number is %d", num1+num2);
    
    return 0;
}
