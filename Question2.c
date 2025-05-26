//insert a element in an array at a given location.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int a,b;
    printf("Enter the element to be inserted :");
    scanf("%d",&a);
    printf("Enter the location where the element to be inserted:");
    scanf("%d",&b);
    for(int i=5;i>b;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[b]=a;
    for(int j=0;j<=5;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}