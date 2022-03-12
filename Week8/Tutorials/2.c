
// Given two complex numbers, write a program to store the complex numbers in a Structure and perform addition of the numbers.

// Input Format: Two complex numbers with their real part and imaginary part.

// Output Format: Sum of the given two complex numbers

 

#include <stdio.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    printf("Sum = %.1f + %.1fi",a+c,b+d);
}
