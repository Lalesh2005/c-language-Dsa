//WAP to find the location of the array element using linear search.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int loc,target,a=-1;
    printf("Enter the element to be searched:");
    scanf("%d",&target);
    for (int i=0;i<=4;i++)
    {
        if(arr[i]==target)
        {
            printf("Element found at %dth location",i);
            a=i;
            break;
        }
        else 
        {
            continue;
        }
    }
    if(a==10)
    {
        printf("Element not found");
    }
    return 0;
}