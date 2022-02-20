#include <stdio.h>
void calculate(int arr[]){
    long long int sum=0;
    for(int i=1;i<arr[0]+1;i++){
        sum=0;
        for(int j=1;j<arr[i]+1;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%lld\n",sum);
        }
    
}
int main(){
    int arr[300];
    scanf("%d",arr);
    for(int i=1;i<=arr[0]+1;i++){
        scanf("%d",arr+i);
    }
    calculate(arr);
}