#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch(n%2){
        case 0:
        printf("The given is even number");
        break;
        case 1:
        printf("The given is odd number");
        break;
    }

}