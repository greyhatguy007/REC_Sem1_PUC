#include <stdio.h>
struct Record{
    int rollno, score;
    char name[20];
};

int main(){
    int n;
    scanf("%d", &n);
    struct Record s[n], temp;
    for(int i=1;i<=n;i++){
        scanf("%d %s %d\n", &s[i].rollno, s[i].name, &s[i].score);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[j].score<s[j+1].score){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    for(int j=1;j<=n;j++){
        printf("%d %s %d\n", s[j].rollno, s[j].name, s[j].score);
    }
    return 0;
}