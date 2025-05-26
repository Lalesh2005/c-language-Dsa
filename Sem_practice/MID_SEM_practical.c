//FORMATION OF SINGLY LINKED LIST.


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };struct node *new,*start,*temp;

// int main()
// {
//     int n;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node *)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     char ch;
//     temp=start;
//     printf("Enter y to continue:");
//     scanf(" %c",&ch);
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         new=(struct node *)malloc(sizeof(struct node));
//         new->data=n;
//         temp->link=new;
//         temp=new;
        
//         printf("Enter y to continue:");
//         scanf(" %c",&ch);
//     }
//     temp=start;
//     while(temp!=NULL)
//     {
//         printf("Elements are:%d\n",temp->data);
//         temp=temp->link;
//     }
//     return 0;
// }

//DELETE OF NODE  AT BEGGINING OF LINKED LIST.

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int info;
//    struct node *link;
// };struct node *start,*new,*temp;

// int main()
// {
//     int n;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->info=n;
//     start->link=NULL;
//     char ch;
//     printf("Want to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         new=(struct node*)malloc(sizeof(struct node));
//         new->info=n;
//         temp->link=new;
//         new->link=NULL;
//         temp=temp->link;
//         printf("Want to continue:");
//         scanf(" %c",&ch);
//     }
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     temp=start;
//     start=temp->link;
//     free(temp);
//     printf("Deleted 1st node:\n");
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     return 0;
// }


//DELETE OF NODE AT THE END OF LINKED LIST.


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int info;
//    struct node *link;
// };struct node *start,*new,*temp,*prev;


// int main()
// {
//     int n;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->info=n;
//     start->link=NULL;
//     char ch;
//     printf("Want to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         new=(struct node*)malloc(sizeof(struct node));
//         new->info=n;
//         temp->link=new;
//         new->link=NULL;
//         temp=temp->link;
//         printf("Want to continue:");
//         scanf(" %c",&ch);
//     }
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     temp=start;
//     while (temp->link!=NULL)
//     {
//         prev=temp;
//         temp=temp->link;
//     }
//     prev->link=NULL;
//     free(temp);
//     printf("Deleted last node:\n");
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     return 0;
// }


//DELETION FROM THE MIDDLE OF THE LINKED LIST.


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int info;
//    struct node *link;
// };struct node *start,*new,*temp,*prev,*nxt;


// int main()
// {
//     int n;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->info=n;
//     start->link=NULL;
//     char ch;
//     printf("Want to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         new=(struct node*)malloc(sizeof(struct node));
//         new->info=n;
//         temp->link=new;
//         new->link=NULL;
//         temp=temp->link;
//         printf("Want to continue:");
//         scanf(" %c",&ch);
//     }
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     int choice;
//     printf("Enter which node want to delete:");
//     scanf("%d",& choice);
//     int i=1;
//     temp=start;
//     if (choice==1)
//     {
//         start=temp->link;
//         free(temp); 
//     }
    
    
//     else if(choice>1)
//     {
//         temp=start;
//         while (i<choice)
//         {
//             prev=temp;
//             temp=temp->link;
//             nxt=temp;
//             i++;
//         }
//         prev->link=nxt->link;
//         temp->link=NULL;
//         free(temp);
//         printf("Deleted mid node:\n");
//     }
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     return 0;
// }


//INSERTION IN MID.


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int info;
//    struct node *link;
// };struct node *start,*new,*temp,*prev,*new1,*nxt;


// int main()
// {
//     int n;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->info=n;
//     start->link=NULL;
//     char ch;
//     printf("Want to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         new=(struct node*)malloc(sizeof(struct node));
//         new->info=n;
//         temp->link=new;
//         new->link=NULL;
//         temp=temp->link;
//         printf("Want to continue:");
//         scanf(" %c",&ch);
//     }
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     temp=start;
//     int choice;
//     printf("Enter the choice:");
//     scanf("%d",& choice);
//     new1=(struct node*)malloc(sizeof(struct node));
//     printf("Enter the element:");
//     scanf("%d",&n);
//     new1->info=n;
//     new1->link=NULL;
//     int i;
//     while (i<=choice)
//     {
//         prev=temp;
//         nxt=temp->link;
//         i++;
//     }
//     temp->link=new1;
//     new1->link=nxt;
//     printf("Isert  in mid node:\n");
//     temp=start;
//     while (temp!=NULL)
//     {
//         printf("Element of linked list:%d\n",temp->info);
//         temp=temp->link;
//     }
//     return 0;
// }


//INSERT THE ELEMENT AT A GIVEN POSITION IN THE ARRAY.

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int position,n;
//     printf("Enter the position:");
//     scanf("%d",&position);
//     printf("Enter the element");
//     scanf("%d",&n);
//     for(int i=5;i>=position;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[position]=n;
//     for (int  j = 0; j <=5; j++)
//     {
//        printf("%d\n",arr[j]);
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// void swap(int* a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     }

   
//         void reverseArray(int arr[], int n) {
//             for(int i=0;i<n;i++)
//             {
//                 for(int j=i+1;j<n;j++)
//                 {
//                     swap(&arr[i],&arr[j]);
//                 }
//             }
//             for (int  l = 0; l < n; l++)
//             {
//                 printf("%d",arr[l]);
//             }
            
//         }
        


// int main()
// {
//     int arr[]={1,2,3,4};
//     reverseArray(&arr[0],4);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// void vromm(int* stack,int* top)
// {
//     stack[0]=1;
//     stack[1]=1000;
//     for (int i = 0; i < 2; i++)
//     {
//         printf("%d\n",stack[i]);
//     }
//     *top=40;
    
    
// }
// int main()
// {
//  int stack[100];
//  int top=-1;
//  vromm( stack,&top);
//  printf("%d",top);
// }

// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// };

// // Global node pointers
// struct node *node1, *node2, *node3, *node4, *node5, *node6;
// int main()
// {
//     // Allocate memory for nodes
//     node1 = (struct node *)malloc(sizeof(struct node));
//     node2 = (struct node *)malloc(sizeof(struct node));
//     node3 = (struct node *)malloc(sizeof(struct node));
//     node4 = (struct node *)malloc(sizeof(struct node));
//     node5 = (struct node *)malloc(sizeof(struct node));
//     node6 = (struct node *)malloc(sizeof(struct node));

//     // Assign data values
//     node1->data = 10;
//     node2->data = 12;
//     node3->data = 15;
//     node4->data = 25;
//     node5->data = 30;
//     node6->data = 36;

//     // Connect nodes to form the tree
//     node1->left = node2;
//     node1->right = node3;
    
//     node2->left = node4;
//     node2->right = node5;

//     node3->left = NULL;
//     node3->right = node6;

//     node4->left = NULL;
//     node4->right = NULL;

//     node5->left = NULL;
//     node5->right = NULL;

//     node6->left = NULL;
//     node6->right = NULL;

//     // Root node
//     struct node *root = node1;

//     // Perform iterative inorder traversal
//     printf("Inorder Traversal: ");
//     struct node *ptr = root;
//     struct node *stack[1000];
//     int top = -1;
//     while (ptr != NULL || top >= 0) {
//         // Reach the leftmost node of the current subtree
//         while (ptr != NULL) {
//             stack[++top] = ptr;
//             ptr = ptr->left;
//         }

//         // Pop the top node from the stack
//         ptr = stack[top--];

//         // Print the node's value
//         printf("%d ", ptr->data);

//         // Move to the right subtree
//         ptr = ptr->right;
//     }
//     printf("\n");

//     // Free allocated memory
//     free(node1);
//     free(node2);
//     free(node3);
//     free(node4);
//     free(node5);
//     free(node6);

//     return 0;

// }



// Stack push operation


// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int info;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*node2,*prev;
// int main()
// {
//     int a,b;
//     node2=(struct node*)malloc(sizeof(struct node));
//     node2->info=12;
//     node2->link=NULL;
//     ptr=node2;
//     start=node2;
//     printf("Enter 1 to push in the linked list and 0 to exit:");
//     scanf("%d",& a);
//     while(a!=0)
//     {
//         printf("Enter the element:");
//         scanf("%d",& b);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->info=b;
//         node1->link=NULL;
//         start=node1;
//         node1->link=ptr;
//         ptr=node1;
//         printf("Enter 1 to push in the linked list and 0 to exit:");
//         scanf("%d",&a);
//     }
//     ptr=start;
//     while (ptr!=NULL)
//     {
//         printf("%d ",ptr->info);
//         ptr=ptr->link;
//     }
//     ptr=start;
//     printf("Enter 2 if want to pop else enter 0 to exit:");
//     scanf("%d",& a);

//     //pop fo stack.


//     // while(a!=0)
//     // {
//     //     start=ptr->link;
//     //     ptr->link=NULL;
//     //     free(ptr);
//     //     ptr=start;
//     //     printf("Enter 2 if want to pop else enter 0 to exit:");
//     //     scanf("%d",& a);
//     // }

//     //pop for queue .

//     while (a!=0)
//     {
//         while (ptr->link!=NULL)
//         {
//             prev=ptr;
//            ptr=ptr->link;
//         }
//         prev->link=NULL;
//         free(ptr);
//         ptr=start;
//         printf("Enter 2 if want to pop else enter 0 to exit:");
//         scanf("%d",& a);
//     }
    

//     ptr=start;
//     while (ptr!=NULL)
//     {
//         printf("%d ",ptr->info);
//         ptr=ptr->link;
//     }
//     return 0;
// }




//Given the head of a linked list, the task is to reverse this list and return the reversed head.

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
struct node *start,*temp,*ptr,*node1;
int main()
{
    int a,n;
    printf("Enter the number of node to create: ");
    scanf("%d",& n);
    printf("Enter the Element: ");
    scanf("%d",& a);
    node1=(struct node*)malloc(sizeof(struct node));
    node1->data=a;
    node1->link=NULL;
    start=node1;
    ptr=start;

    for (int  i = 1; i < n; i++)
    {
        printf("Enter the Element: ");
        scanf("%d",& a);
        node1=(struct node*)malloc(sizeof(struct node));
        node1->data=a;
        node1->link=NULL;
        ptr->link=node1;
        ptr=node1;
    }
    
    ptr=start;
    printf("Elements are :");
    while (ptr!=NULL)
    {
       printf("%d ",ptr->data);
       ptr=ptr->link; 
    }
    ptr=start;
    int count=0;


    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("\n");
    //printf("%d",count);

    ptr=start;
    while (count!=0)
    {
       for (int j = 1; j < count; j++)
       {
            ptr=ptr->link;     
       }
       printf("%d",ptr->data);
       printf("\n");
       ptr=start;
       count--;
       
    }

    return 0;
}