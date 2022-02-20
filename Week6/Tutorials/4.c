#include <stdio.h>
#include <string.h>
double ft(double n){
    if(n==0|| n==1)
    return 1;
    return n*ft(n-1);
}

int count(char str[100]){
    int f[26]={0};
    for(int i=0;i<strlen(str);i++){
        f[str[i] - 'a']++;
    }
    int a=ft(strlen(str));
    for(int i=0;i<26;i++){
        if(f[i]>1){
            a=a/ft(f[i]);
        }
    }
    return a;
}
int main(){
    char word[50];
    scanf("%s", word);
    printf("%d", count(word));
    return 0;
}