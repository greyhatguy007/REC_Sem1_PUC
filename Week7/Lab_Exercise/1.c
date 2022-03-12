 // Given a list of strings, concatenate those strings into the alphabetically smallest string possible. For example, 'a' < 'b', 'ab' < 'ac' and 'ab' < 'abc'.

 

// Example

 

// substrings = ['a','bd','ac','cd']

 

// Return 'aacbdcd'.

 

// Example

 

// substrings = ['c', 'cc', 'cca', 'cccb']

 

// Return 'ccacccbccc'.

 

// Function Description

 

// Complete the function smallestString in the editor below.

 

// smallestString has the following parameter(s):

// string substrings[n]:  an array of strings

 

// Returns:

// string: the alphabetically smallest string formed by the concatenation of all elements of substrings

 

// Constraints

 

// ·       1 ≤ n ≤ 3500

// ·       1 ≤ length of substrings[i] ≤ 1000

// ·       Each substrings[i] is composed of lowercase letters only, ascii[a-z].

 

// Input Format for Custom Testing

// Input from stdin will be processed as follows and passed to the function.

 

// The first line contains an integer n, the size of the array substrings.

// Each of the next n lines contains a string substrings[i].

 

// Sample Case 0

// Sample Input

 

// STDIN     Function

// -----     -----

// 3      →  substrings[] size n = 3

// a      →  substrings = ['a', 'bc', 'ad']

// bc

// ad

 

 

// Sample Output

 

// aadbc

 

// Explanation

 

// The strings that can be created in alphabetical order are are 'aadbc', 'abcad', 'adabc', 'adbca', 'bcaad', 'bcada'. The smallest is 'aadbc'.

 

// Sample Case 1

// Sample Input

 

// STDIN     Function

// -----     -----

// 3      →  substrings[] size n = 3

// abc    →  substrings = ['abc', 'ab', 'bc']

// ab

// bc

 

// Sample Output

 

// ababcbc

 

// Explanation

 

// The strings that can be formed are 'abcabbc', 'abcbcab', 'ababcbc', 'abbcabc', 'bcabcab' and 'bcababc'. The alphabetically smallest string is 'ababcbc'.

 

// Sample Case 2

// Sample Input

 

// STDIN     Function

// -----     -----

// 3     →  substrings[] size n = 3

// dd    →  substrings = ['dd', 'dda', 'ddb']

// dda

// ddb

 

// Sample Output

 

// ddddaddb

 

// Explanation

 

// The strings that can be formed are 'ddddaddb', 'ddddbdda', 'ddaddddb', 'ddaddbdd', 'ddbdddda', 'ddbddadd'. The alphabetically smallest string is 'ddddaddb'.

 
/*
 * Complete the 'smallestString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY substrings as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
 #include <string.h>
char* smallestString(int substrings_count, char **substrings) {
    char *s= malloc(100*sizeof(char));
    for(int i=0;i<substrings_count;i++){
        for(int j=0;j<substrings_count-i-1;j++){
            if(strcmp(substrings[j],substrings[j+1])>0){
                char * temp= malloc(100*sizeof(char));
                temp=substrings[j];
                substrings[j]=substrings[j+1];
                substrings[j+1]=temp;
            }
            
        }  
    }
    
    for(int i=0;i<substrings_count;i++){
        strcat(s,substrings[i]);
    }
    return s;

}
