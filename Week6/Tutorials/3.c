#include <stdio.h>
int main(){
    int n,i,a=-1,b=1,c=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}