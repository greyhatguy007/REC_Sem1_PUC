#include <stdio.h>
int main(){
    int a=1,b=1,c;
    int n;
    scanf("%d", &n);
    printf("0 1 1 ");
    for(int i=3;i<n;++i){
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        
    }
    
}