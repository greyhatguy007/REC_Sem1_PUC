#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    char g;
    scanf("%1d%1d%1c%1d%1d-%1d%1d", &a,&b,&g, &c,&d,&e,&f);
    a=a+b, c=c+d, e=e+f;
    a=a%2, c=c%2, e=e%2;
    if(a==0 && c==0 && e==0){
        printf("valid");
    }
    else{
        printf("invalid");
    }
}