#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,m,n,cop=0,arr[1000];
    long long int s1=0,s2=0;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        s1=0;
        s2=0;
        scanf("%d %d", &n, &m);
        for(int j=0;j<n;j++){
            scanf("%d", &arr[j]);
        }
        for(int j=1;j<n;j++){
            for(int k=1;k<n;k++){
                if(arr[k]<arr[k-1]){
                    cop = arr[k];
                    arr[k]=arr[k-1];
                    arr[k-1]=cop;
                }
            }
        }
        for(int j=m;j<n;j++){
            s1+=arr[j];
        }
        for(int j=0;j<n-m;j++){
            s2+=arr[j];
        }
        printf("%lld\n",llabs(s1-s2));
    }
}