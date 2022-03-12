// C program to read name and marks of n number of students from user and store them in a file.


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    FILE *p;
    char name[100];
    int mark;
    p=fopen("marks.text","a");
    scanf("%s %d",name,&mark);
    fscanf(p,"%s %d",name,&mark);
    fclose(p);
    }
    printf("Store the data in file");
}
