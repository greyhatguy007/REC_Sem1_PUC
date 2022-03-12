// Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

// Input Format:

// First line contains first date in dd mm yyyy format

// Second line contains first date in dd mm yyyy format

// Output Format:

// display the result as Dates are equal  or Dates are not equal



#include <stdio.h>
struct date{
    int date;
    int month;
    int year;
}s[2];
int main(){
    for(int i=0;i<2;i++){
        scanf("%d %d %d",&s[i].date,&s[i].month,&s[i].year);
    }
    if(s[0].date==s[1].date){
        printf("Dates are equal");
    }
    else{
        printf("Dates are not equal");
    }
    }
