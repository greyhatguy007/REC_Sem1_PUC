#include <stdio.h>

void pattern(int n);

int main(){
    int num;
    scanf("%d", &num);
    pattern(num);
    return 0;
}

void pattern(int n){
    if(n==0){return;}
    pattern(n-1);
    printf("%d", n);
    pattern(n-1);
}