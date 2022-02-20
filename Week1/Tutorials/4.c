#include <stdio.h>
int main(){
    int x,a,b,ans;
    scanf("%d", &x);
    scanf("%d", &a);
    scanf("%d", &b);
    ans = (x*a) - (x*b) - 100;
    printf("%d", ans);
}