#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,sum=0;
    
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("The sum of first ten natural number is %d",sum);
    return 0;
}

