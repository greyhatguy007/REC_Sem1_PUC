#include <stdio.h>
#include <string.h>
int main(){
    char ch[1000];
    int i ;
    scanf("%s", ch);
    for(i=0;i<strlen(ch);i++){
        if(ch[i]>=65&&ch[i]<=90){
            ch[i]+=32;
        }
    }
    printf("%s", ch);
    return 0;
}