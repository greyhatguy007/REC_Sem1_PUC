#include <stdio.h>
int main(){
    int birth,cur;
    scanf("%d", &birth);
    scanf("%d", &cur);
    if(birth>cur){
        birth = 100-birth;
        printf("%d", birth+cur);
    }
    else{
        printf("%d", cur-birth);
    }
}