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

*/ //


#include <stdio.h>
int main() {
int l =5 , b = 10 , m = 3 , n = 7;
printf("The Area of rectangle is %d \n" , l*b);
printf("The Perimeter of rectangle is %d \n" , 2*(l+b));
printf("The Area of rectangle is %d \n" , m*n);
printf("The Perimeter of rectangle is %d \n" , 2*(m+n));
return 0;
}