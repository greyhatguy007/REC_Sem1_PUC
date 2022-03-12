// In a tender process normally the lowest qualified bidder is given the contract. Your boss has asked you to develop a C program that will have preprocessor macros with arguments that will choose the lowest bidder among two quoted price(ie. you have to use #define preprocessor directive with macros to solve it).

// Input Format :  The first line contains the integer a that denotes the first number. The second line contains the integer b that denotes the second number

// Output Format : The output should print the minimum of a and b values.


#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("Minimum number is %d",a);
    }
    else
    printf("Minimum number is %d",b);
}
