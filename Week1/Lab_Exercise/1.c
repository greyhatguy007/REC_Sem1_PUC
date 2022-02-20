#include <stdio.h>
int main(){
    int rad;
    scanf("%d",&rad);
    float ans;
    float circf;
    ans=3.14*rad*rad;
    circf = 3.14*2*rad;
    printf("%.2f\n", ans);
    printf("%.2f", circf);
    return ans;
} 