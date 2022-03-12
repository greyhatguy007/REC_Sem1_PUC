// In a warehouse, a manager would like to sort the items in the stock. Given an array of n item values, sort the array in ascending order, first by the number of items with a certain value, then by the values themselves.

 

// Example

// n = 6

// items = [4, 5, 6, 5, 4, 3]

 

// ·       There are 2 values that occur twice: [4, 4, 5, 5].

// ·       There are 2 values that occur once: [3, 6].

// ·       The array of items sorted by quantity and then by value in ascending order is [3, 6, 4, 4, 5, 5]

 

// Function Description

 

// Complete the function itemsSort in the editor below.

 

// itemsSort has the following parameter(s):

// int items[n]:  an array of integers to sort

 

// Returns:

// int[n]: An array of integers sorted as described.

 

// Constraints

 

// ·       1 ≤ n ≤ 2 × 105

// ·       1 ≤ items[i] ≤ 106

 

// Input Format for Custom Testing

 

// Input from stdin will be processed as follows and passed to the function.

 

// The first line contains an integer n, the size of the integer array items.

// The next n lines each contain an integer, items[i].

 

// Sample Case 0

 

// Sample Input 0

 

// STDIN         Function

// -----         --------

// 5        →    items[] size n = 5

// 3        →    items  = [3, 1, 2, 2, 4]

// 1

// 2

// 2

// 4

 

// Sample Output 0

 

// 1

// 3

// 4

// 2

// 2

 

// Explanation

 

// ·       There is a quantity of 2 for the item  2  : [2, 2]

// ·       There is a quantity of 1 for the items  1, 3 and 4  : [1],  [3], [4]

// ·       The array of items sorted by quantity and then by value in ascending order is [ 1, 3, 4, 2, 2]

 

// Sample Case 1

 

// Sample Input 1

 

// STDIN     Function

// -----     --------

// 10    →   items[] size n = 10

// 8     →   items = [8, 5, 5, 5, 5, 1, 1, 1, 4, 4]

// 5

// 5

// 5

// 5

// 1

// 1

// 1

// 4

// 4

 

// Sample Output 1

 

// 8

// 4

// 4

// 1

// 1

// 1

// 5

// 5

// 5

// 5

 

// Explanation

 

// ·       There is a quantity of 4 for the item  5  :[5, 5, 5, 5]

// ·       There is a quantity of 3 for the item  1  :[1, 1, 1]

// ·       There is a quantity of  2 for the item  4  :[4, 4]

// ·       There is a quantity of 1  for the items 8 : [8]

// ·       The array of items sorted by quantity and then by value in ascending order is [ 8, 4, 4, 1, 1, 1, 5, 5, 5, 5]
