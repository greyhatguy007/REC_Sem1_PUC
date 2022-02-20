#include <stdio.h>
struct box{
    int height,width,length;
};
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        struct box b1;
        scanf("%d %d %d", &b1.length, &b1.width, &b1.height);
        if(b1.height < 41){
            printf("%d\n", b1.length*b1.width*b1.height);
        }
    }
}