#include <stdio.h>
#define CIR(x,y) 2*(x+y)
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Circumference is %d", CIR(a,b));
    return 0;
}