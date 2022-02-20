#include <stdio.h>
int main(){
    int a,b,c,d,x,y;
    scanf("%d/%d+%d/%d", &a,&b,&c,&d);
    x=(a*d)+(b*c);
    y=b*d;
    printf("%d/%d", x,y);
    
}