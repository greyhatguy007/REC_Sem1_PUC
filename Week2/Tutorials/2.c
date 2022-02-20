#include <stdio.h>
int main(){
    int i, k,rev;
    int ones,tens;
    scanf("%d%d", &i,&k);
    ones=i/10;
    tens=i%10;
    rev = tens*10 + ones;
    int diff;
    diff = rev - i;
    if (diff%k==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}