#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);
    int a=0,b=0,c=1,t1;
    for(int i=1;i<n-1;i++){
        t1 = a+b+c;
        a=b;
        b=c;
        c=t1;
    }
    printf("%d", c);
    return 0;
}