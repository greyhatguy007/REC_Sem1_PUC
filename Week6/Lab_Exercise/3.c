#include <stdio.h>

int answer(int n, int p);

int main(){
    int a,b,ans;
    scanf("%d %d", &a,&b);
    ans = answer(a,b);
    printf("%d", ans);
}

int answer(int n, int p){
    int temp[n/2];
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            temp[count++]=i;
        }
    }
    
    return(temp[p-1]);
}