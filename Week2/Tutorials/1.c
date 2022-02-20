#include <stdio.h>
int main(){
    int a;
    int ans=0;
    scanf("%d",&a);
    if(a%3!=0){
        ans=1;
    }
    if(a%7!=0){
        ans=1;
    }
    if(ans==0){
        printf("1");
    }
    else{
        printf("0");
    }
}