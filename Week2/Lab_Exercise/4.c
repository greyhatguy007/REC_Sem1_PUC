#include <stdio.h>

int main(){
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if(a==b && a==c){
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a ){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}