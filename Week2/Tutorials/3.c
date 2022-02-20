#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float ans1,ans2;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    ans1=(-b+sqrt(b*b-4*a*c))/2*a;
    ans2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("%.1f\n", ans1);
    printf("%.1f", ans2);
}