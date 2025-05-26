#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={1,3,5,2,4};
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
    printf("location of the largest number is:%d\n",a);
    int second,b;
    for(int k=0;k<=4;k++)
    {
        for(int l=1;l<=4;l++)
        {
            if(arr[k]<arr[l] && arr[l]!=max)
            {
                second=arr[l];
                b=l;
            }
            else
            {
                continue;
            }
        }
    }
    printf("second largest is:%d\n",second);
    printf("location of second largest number is at%dth location",b);
    return 0;
}