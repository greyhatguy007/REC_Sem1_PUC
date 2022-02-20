#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n%2!=0){
        printf("Invalid number");
    }
    else if(n==0){
        printf("Invalid number");
    }
    else if(n>100){
        printf("Invalid number");
    }
    else{
        printf("Doll will sing");
    }
}