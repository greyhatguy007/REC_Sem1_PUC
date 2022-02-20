#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int ans;
    ans = 1*a+2*b+3*c+4*d+5*e+6*f+7*g+8*h+9*i+10*j;
    if(ans%11==0){
        printf("Legal ISBN");
    }
    else{
        printf("Illegal ISBN");
    }
}