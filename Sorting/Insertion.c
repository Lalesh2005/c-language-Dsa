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
    int arr[5]={2,1,7,3,9};
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                swap(&arr[j],&arr[i]);
            }
        }
    }
    for(int k=0;k<5;k++)
    {
        printf("%d\n",arr[k]);
    }
   
    return 0;
}