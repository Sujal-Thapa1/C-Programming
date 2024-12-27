// Program to print multiplication table of a given number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,i,mul;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=0;i<=12;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}

