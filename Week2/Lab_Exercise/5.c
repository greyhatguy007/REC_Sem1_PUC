#include <stdio.h>
#include <math.h>
int main(){
    double cost;
    int per, tax;
    double ans;
    int final;
    double v1,v2;
    scanf("%lf", &cost);
    scanf("%d", &per);
    scanf("%d", &tax);
    v1 = (per*cost)/100;
    v2 = (tax*cost)/100;
    ans = cost+v1+v2;
    final = round(ans);
    printf("%d", final);
}