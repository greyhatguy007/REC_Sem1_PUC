#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int err=0;
        char w1[50];
        char w2[50];
        scanf("%s", w1);
        scanf("%s", w2);
        for(int j=0;j<=strlen(w1);j++){
            if(w1[j]!=w2[j]){
                err+=1;
            }
        }
        if(err==1||err==2){
            printf("ALMOST THERE\n");
        }
        else if(err==0){
            printf("TRUE\n");
        }
        else{
            printf("FALSE\n");
        }
    }
}