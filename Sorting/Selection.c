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
    int min=arr[0],minIndex=0;
    for(int i=0;i<5;i++)
    {
        min=arr[i];
        minIndex=i;
        for (int j=i;j<5;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minIndex=j;
            }
        }
        swap(&arr[i],&arr[minIndex]);
    }
    for(int k=0;k<5;k++)
    {
        printf("%d\n",arr[k]);
    }

    return 0;
}
