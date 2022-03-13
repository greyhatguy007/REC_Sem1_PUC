 
/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
#include<string.h>
int balancedSum(int arr_count, int* arr) 
{
    int sum=0;
    for(int i=0;i<arr_count;i++)
    sum=sum+arr[i];
    int sum1=0;
    sum=sum-arr[arr_count-1];
    for(int i=arr_count-2;i>0;i--)
    {
        sum1=sum1+arr[i+1];
        sum=sum-arr[i];
        if(sum==sum1)
        return i;
    }
    return -1;
}
