#include <stdio.h>
int main(){
    int a,b,c,d,t;
    scanf("%d", &a);
    scanf("%d", &b);
    t=a+b;
    c=t/60;
    d=t%60;
    printf("The time is ");
    printf("%d hour", c); 
    printf(" %d minutes." ,d);
}