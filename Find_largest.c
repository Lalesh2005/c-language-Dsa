// WAP to print the largest element from an array and its location.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={2,3,1,5,4};
    int max=arr[0],a;
    for(int i=0;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(arr[i]<arr[j])
            {
                max=arr[j];
                a=j;
            }
            else
            continue;
        }
    }
    printf("largest number is:%d\n",max);
    printf("location of the largest number is:%d",a);
    return 0;
}