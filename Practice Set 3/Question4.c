//Program to check whether the input year is a leap year or not
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is a leap year",year);
    }else{
        printf("%d is a not leap year",year);
    }
    return 0;
}
