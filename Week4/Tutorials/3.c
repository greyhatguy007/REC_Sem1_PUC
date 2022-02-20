#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
}