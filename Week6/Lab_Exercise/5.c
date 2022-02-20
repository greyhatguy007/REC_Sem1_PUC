#include <stdio.h>

int answer();

int main(){
    int ans;
    ans = answer();
    printf("%d", ans);
}

int answer(){
    int n,ser;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    scanf("\n %d", &ser);
  
    for(int i=0;i<n;i++){
      
        if(arr[i]==ser){
            return 1;
        }
    }
    return 0;
    
}