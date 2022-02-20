#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int upper=0,lower=0;
    char ch[1000];
    scanf("%[^\n]", ch);
    for(i=0;ch[i]!=0;i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            upper++;
        } else if(ch[i]>='a' && ch[i]<='z'){
            lower++;
        }
    }
    printf("%d\n", upper);
    printf("%d", lower);
}