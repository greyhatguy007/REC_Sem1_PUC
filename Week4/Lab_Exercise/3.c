#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n==2){
        int a,b,o=0,ev=0;
        scanf("%d %d", &a,&b);
        int ar[2] = {a,b};
        for(int i=0;i<2;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
    if(n==3){
        int a,b,c,o=0,ev=0;
        scanf("%d %d %d", &a,&b,&c);
        int ar[3] = {a,b,c};
        for(int i=0;i<3;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
    if(n==4){
        int a,b,c,d,o=0,ev=0;
        scanf("%d %d %d %d", &a,&b,&c,&d);
        int ar[4] = {a,b,c,d};
        for(int i=0;i<4;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
    if(n==5){
        int a,b,c,d,e,o=0,ev=0;
        scanf("%d %d %d %d %d", &a,&b,&c, &d,&e);
        int ar[5] = {a,b,c,d,e};
        for(int i=0;i<5;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
    if(n==4){
        int a,b,c,d,o=0,ev=0;
        scanf("%d %d %d %d", &a,&b,&c,&d);
        int ar[4] = {a,b,c,d};
        for(int i=0;i<4;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
    if(n==6){
        int a,b,c,d,e,f,o=0,ev=0;
        scanf("%d %d %d %d %d %d", &a,&b,&c, &d,&e,&f);
        int ar[6] = {a,b,c,d,e,f};
        for(int i=0;i<6;i++){
            if(ar[i]%2==0){
                ev+=1;
            }
            else{
                o+=1;
            }
        }
        printf("%d %d", ev,o);
    }
}