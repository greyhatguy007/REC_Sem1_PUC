#include <stdio.h>

int main(){
    int age, w;
    scanf("%d", &age);
    scanf("%d", &w);
    if(age>18 && w>40){
        printf("1");
    }
    else{
        printf("0");
    }
}