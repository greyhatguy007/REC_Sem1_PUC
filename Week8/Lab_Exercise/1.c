#include <stdio.h>
struct Date{
    int date,month,year;
}d1;

int main(){
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);
    if(d1.date+15<=30){
        printf("Same month");
    } else {
        printf("Next month");
    }
    return 0;
}