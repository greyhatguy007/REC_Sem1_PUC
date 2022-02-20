#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a*a + b*b == c*c){
        printf("1");
    }
    else{
        printf("0");
    }
    
}