// Given an array of numbers, find the index of the smallest array element (the pivot), for which the sums of all elements to the left and to the right are equal. The array may not be reordered.

 

// Example

 

// arr=[1,2,3,4,6]

 

// ·         the sum of the first three elements, 1+2+3=6. The value of the last element is 6.

// ·         Using zero based indexing, arr[3]=4 is the pivot between the two subarrays.

// ·         The index of the pivot is 3.

 

// Function Description

 

// Complete the function balancedSum in the editor below.

 

// balancedSum has the following parameter(s):

// int arr[n]:  an array of integers

 

// Returns:

// int: an integer representing the index of the pivot

 

// Constraints

 

// ·         3 ≤ n ≤ 105

// ·         1 ≤ arr[i] ≤ 2 × 104, where 0 ≤ i < n

// ·         It is guaranteed that a solution always exists.

 

// Input Format for Custom Testing

 

// Input from stdin will be processed as follows and passed to the function.

 

// The first line contains an integer n, the size of the array arr.

// Each of the next n lines contains an integer, arr[i], where 0 ≤ i < n.

 

// Sample Case 0

// Sample Input 0

 

// STDIN     Function Parameters

// -----     -------------------

// 4      →  arr[] size n = 4

// 1      →  arr = [1, 2, 3, 3]

// 2

// 3

// 3

 

// Sample Output 0

 

// 2

 

// Explanation 0

 

// ·         The sum of the first two elements, 1+2=3. The value of the last element is 3.

// ·         Using zero based indexing, arr[2]=3 is the pivot between the two subarrays.

// ·         The index of the pivot is 2.

 

// Sample Case 1

// Sample Input 1

 

// STDIN     Function Parameters

// -----     -------------------

// 3      →  arr[] size n = 3

// 1      →  arr = [1, 2, 1]

// 2

// 1

 

// Sample Output 1

 

// 1

 

// Explanation 1

 

// ·         The first and last elements are equal to 1.

// ·         Using zero based indexing, arr[1]=2 is the pivot between the two subarrays.

// ·         The index of the pivot is 1.

/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int balancedSum(int arr_count, int* arr) 
{
    int i,j,suml=0,n;
    for(i=0;i<arr_count;i++){
        suml+=arr[i];
        int sumr=0;
        for(j=2;j<arr_count;j++){
            sumr+=arr[j];
        }
        if(suml==sumr){
           n=j-2;
        }

    }
    return n;
    
