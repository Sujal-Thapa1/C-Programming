//Program to check whether the character entered by the user is lowercase or upper case.
#include<stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char word;
    printf("Enter a word");
    scanf("%c",&word);
    if(isupper(word)){
        printf("%c is a uppercase word",word);
    }else if(islower(word)){
        printf("%c is a lowercase word",word);
    }else{
        printf("invalid input");
    }
    return 0;
}
