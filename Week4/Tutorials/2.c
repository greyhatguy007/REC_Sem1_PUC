#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long fact=1;
    for(int i=2;i<=n;i++){
        fact = fact * i;
    }
    printf("%ld",fact);
}