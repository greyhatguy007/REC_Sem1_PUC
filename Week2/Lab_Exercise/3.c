#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int d1,d2;
    d1 = abs(a-c);
    d2 = abs(b-c);
    if(d1<d2){
        printf("Cat A");
    }
    else if(d2<d1){
        printf("Cat B");
    }
    else{
        printf("Mouse C");
    }
    
}