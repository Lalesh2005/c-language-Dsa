//insert any element in a sorted array.
#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,5,6};
    int a=0,b;
    printf("Enter the element to be inserted:");
    scanf("%d",&b);
    for(int i=0;i<5;i++)
    {
        if( arr[i]>b )
        {
            a=i;
            break;
        }
        else if(arr[0]>b)
        {
            a=0;
        }
        else
        {
            a=5;
        }
    }
    //printf("%d\n",a);
     for(int j=5;j>a;j--)
    {
       
        
            arr[j] = arr[j - 1];
        
    }
        arr[a]=b;
    
  for (int k = 0; k <= 5; k++)
    {
        printf("%d\n",arr[k]);
    }
    
    return 0;
}