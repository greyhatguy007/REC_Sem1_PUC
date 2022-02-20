#include <stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    if(b%a==0){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
    if(c%a==0){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
    if(d%a==0){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
    if(e%a==0){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
}