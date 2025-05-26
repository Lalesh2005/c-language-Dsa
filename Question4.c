//delete any given element in a sorted array.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int a,b;
    printf("Enter the element to be deleted:");
    scanf("%d",&a);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            b=i-1;
        }
        else
        continue;
    }
    for(int j=b+1;j<=5;j++)
    {
        arr[j]=arr[j+1];
    }
    for(int k=0;k<4;k++)
    {
        printf("%d\n",arr[k]);
    }
    return 0;
}