#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int count=0;
    for(int i=a;i<=b;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            } 
        }
        if(sum==i){
            count+=1;
        }
    }
    printf("%d", count);
}