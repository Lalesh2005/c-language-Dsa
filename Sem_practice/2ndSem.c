// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *root,*ptr,*node1,*prev;
// void inorder(struct node *node) {
//     if (node == NULL) {
//         return;
//     }
//     inorder(node->left);
//     printf("%d ", node->data);  // Corrected printf statement
//     inorder(node->right);
// }
// int main()
// {
//     int a,b;
//     root=NULL;
//     printf("Enter number of node want to create: ");
//     scanf("%d",&a);
//     printf("Enter the element: ");
//     scanf("%d",&b);
//     node1=(struct node*)malloc(sizeof(struct node));
//     node1->data=b;
//     node1->right=NULL;
//     node1->left=NULL;
//     root=node1;
//     ptr=root;
//     for (int  i = 1; i < a; i++)
//     {
//         printf("Enter the element: ");
//         scanf("%d",&b);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=b;
//         node1->right=NULL;
//         node1->left=NULL;
//         while (ptr!=NULL)
//         {
//             prev=ptr;
//             if (node1->data > ptr->data)
//             {
//                 ptr=ptr->right;
//             }
//             else if (node1->data < ptr->data)
//             {
//                 ptr=ptr->left;
//             }    
//         }
//         if (prev->data < node1->data)
//         {
//             prev->right=node1;
//         }
//         else if (prev->data > node1->data)
//         {
//             prev->left=node1;
//         }
//         ptr=root;
//     }
//     printf("Inorder Traversal: ");
//     inorder(root);
//     return 0;
// }

//selection sort

// #include<stdio.h>
// #include<stdlib.h>
// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *b=*a;
//     *b=temp;
// }
// int main()
// {
//     int arr[5]={4,2,7,10,34};
//     int minIndex,min=arr[0];
//     for (int  i = 0; i < 5; i++)
//     {
//         int min=arr[i];
//         for (int  j = i; i <5 ; i++)
//         {
//             if (arr[min]> arr[j])
//             {
//                 min=arr[j];
//                 minIndex=j;
//             }
            
//         }
//         swap(&arr[i],&arr[minIndex]);
//     }
//     for (int  k = 0; k < 5; k++)
//     {
//         printf("%d ",arr[k]);
//     }
    
//     return 0;
// }


//inserton sort

#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *b=*a;
    temp=*b;
}
int main()
{
    int arr[5]={1,5,4,8,10};
    for (int  i = 1; i < 5; i++)
    {
       temp=arr[i];
       j=i-1;
        for (int  j = 0; j < i; j++)
       {
         if (arr[j] > 
            arr[i])
         {
            swap(&arr[j],&arr[i]);
         }
         
       }  
    }
    for (int  k = 0; k < 5; k++)
    {
        printf("%d ",arr[k]);
    }
    
    return 0;
}