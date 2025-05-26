#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a;
    printf("Enter the number of elements:");
    scanf("%d",& a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",& arr[i]);
    }
    // for(int i=0;i<a;i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    int o,t,h;
    for(int j=0;j<a;j++)
    {
        a=arr[i]%10;
    }
    return 0;
}