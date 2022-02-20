#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d%d", &a,&b);
    scanf("%d",&x);
    if(a%x==0 || b%x==0){
        printf("Monk Wins");
    }
    else{
        printf("Suzie Wins");
    }
}