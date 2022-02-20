#include <stdio.h>
int main(){
    int a,i,c=0;
    scanf("%d",&a);
    int v[a],p[a];
    for(i=0;i<=a;i++){
        scanf("%d", &v[a]);
    }
    for(i=0;i<=a;i++){
        scanf("%d",&p[a]);
    }
    for(int i=0;i<=a;i++){
        if(v[a]<p[a]){
            c+=1;
        }
    }
    if(c>0){
        printf("No");
    } else {
        printf("Yes");
    }
}