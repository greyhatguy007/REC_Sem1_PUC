#include <stdio.h>
int main(){
    int sno;
    scanf("%d", &sno);
    if(sno%8==2 || sno%8==5 ){
        printf("Middle Berth");
    }
    else if(sno%8==3 || sno%8==6){
        printf("Upper Berth");
    }
    else if(sno%8==1){
        printf("Lower Berth");
    }
    else if(sno%8==0){
        printf("Side Upper Berth");
    }
    else{
        printf("Side Lower Berth");
    }
}