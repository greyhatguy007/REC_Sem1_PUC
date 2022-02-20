#include <stdio.h>

int main(){
    int a=0,b=0,ra=0,rb=0,temp=0;
    scanf("%d %d", &a,&b);
    while(a>0){
        temp=a%10;
        ra = ra*10+temp;
        a=a/10;
    }
    while(b>0){
        temp = b%10;
        rb = rb*10+temp;
        b=b/10;
    }
    printf("%d", ra+rb);
    
    
}