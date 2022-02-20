#include <stdio.h>

int primecheck(int n);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", primecheck(num));
}

int primecheck(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return(i);
        }
    }
    return 1;
}