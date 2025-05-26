// circular
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };struct node *start,*temp,*node1;
// int main()
// {
//     int n;
//     char ch;
//     printf("Enter your element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     printf("Enter y to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter your element:");
//         scanf("%d",&n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         node1->link=NULL;
//         temp->link=node1;
//         temp=temp->link;
//         printf("Enter y to continue:");
//         scanf(" %c",&ch);
//     }
//     temp->link=start;
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->link;
//     }
    

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int majorityElement(int* nums, int numsSize) {
    int majority;
    int n=(numsSize/2);
    for (int i = 0; i < numsSize; i++)
    {
        int frequency=0;
        for (int j = 0; j < numsSize; j++)
        {
           if (nums[i]==nums[j])
           {
            frequency++;
           }
           if(frequency>n)
           {
            majority=nums[i];
           }
        }
        
    }
    printf("%d",majority);
    return 0;
}
int main()
{
    int nums[] = {3,2,3};
    int numsSize=3;
    majorityElement(nums,numsSize);
    
    return 0;

}
