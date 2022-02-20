#include <stdio.h>

int main(){
    int i,num;
    int sum = 0;
    scanf("%d", &num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    if(num==sum){
        printf("YES");
    }
    else{
        printf("NO");
    }
}