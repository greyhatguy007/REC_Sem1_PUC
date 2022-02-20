#include <stdio.h>
int main(){
    int testc;
    scanf("%d", &testc);
    for(int i=0;i<testc;i++){
        int count=0;
        int ans=0;
        int n;
        scanf("%d", &n);
        int p=n-1;
        int a[p];
        do{
            scanf("%d", &a[count++]);
        } while (getchar()!='\n' && count<n);
        
        int temp1=0,temp2=0;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<i;j++){
                temp1 += a[j];
            }
            for(int j=n;j>i;j--){
                temp2 += a[j];
            }
            if(temp1==temp2){
                ans = 1;
                break;
            }
        }
        if(ans==0){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
        
    }
}

