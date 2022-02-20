#include <stdio.h>
void sumAlternate(int*arr,int n){
    int sum1=0,sum2=0;
    for(int i=0;i<n*n;i++){
        if(i%2==0){
            sum1+=*(arr+i);
        } else {
            sum2+=*(arr+i);
        }
    }
    printf("%d\n%d", sum1,sum2);
}
int i,j,mat[3][3];
int main(){
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int n=3;
    sumAlternate(&mat[0][0],n);
    return 0;
}