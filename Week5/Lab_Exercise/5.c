#include <stdio.h>
int main(){
    char str[30];
    scanf("%s", str);
    int i,j;
    for(i=0;str[i]!='\0';++i){
        while(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0')){
            for(j=i;str[j]!='\0';++j){
                str[j]=str[j+1];
            }
            str[j] = '\0';
        }
    }
    printf("%s\n",str);
    return 0;
    
}