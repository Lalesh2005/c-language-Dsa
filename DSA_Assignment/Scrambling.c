#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    printf("Enter your word:");
    scanf("%s",word);
    int length=strlen(word);
    int fact=1;
    for(int i=1;i<=length;i++)
    {
        fact=fact*i;
    }
    printf("scrambled time:%d",fact);
    return 0;
}