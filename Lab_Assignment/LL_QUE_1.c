// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     return 0;
// }



//SUM

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     int sum;
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        sum=sum+ptr->data;
//        ptr=ptr->link;
//     }
//     printf("sum: %d",sum);
//     return 0;
// }


//Insert BEg

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     printf("Enter the element you want to insert at begining:");
//     scanf("%d",&n);
//     node1=(struct node*)malloc(sizeof(struct node));
//     node1->data=n;
//     node1->link=NULL;
//     node1->link=start;

//     ptr=node1;
//     printf("New Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     return 0;
// }



//Insert End
// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     printf("Enter the element you want to insert at end:");
//     scanf("%d",&n);
//     node1=(struct node*)malloc(sizeof(struct node));
//     node1->data=n;
//     node1->link=NULL;
//     ptr=start;
//     while (ptr->link!=NULL)
//     {
//        ptr=ptr->link;
//     }
//     ptr->link=node1;
//     ptr=start;
//     printf("New Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     return 0;
// }

//Delete First

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     printf("After deleting the first node:");
//     start=start->link;
//     ptr=start;
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
    
//     return 0;
// }


//Last Delete


// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*temp;
// int main()
// {
//     int n,a;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     ptr=start;
//     printf("After deleting the last node:");
//     while (ptr->link!=NULL)
//     {
//        temp=ptr;
//        ptr=ptr->link;
//     }
//     temp->link=NULL;
//     ptr=start;
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     return 0;
// }


//search Print Loc


// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*temp;
// int main()
// {
//     int n,a,loc=0;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
    
//     printf("Enter the Elelment Wnat to search:");
//     scanf("%d",& n);
//     ptr=start;
//     int i=0;
//     while (ptr!=NULL)
//     {
//         i++;
//         if(ptr->data==n)
//         {
//             loc=i;
//         }
//         ptr=ptr->link;
//     }
//     if (loc==0)
//     {
//        printf("Element not found.");
//     }
//     else
//     {
//         printf("loc of element is:%d",loc);
//     }
    
//     return 0;
// }

//insert at given indexes;

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*temp;
// int main()
// {
//     int n,a,idx;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     printf("Enter the Elelment Wnat to Insert at index:");
//     scanf("%d",& idx);
//     if(idx==1)
//     {
//     printf("Enter the element you want to insert at begining:");
//     scanf("%d",&n);
//     node1=(struct node*)malloc(sizeof(struct node));
//     node1->data=n;
//     node1->link=NULL;
//     node1->link=start;

//     ptr=node1;
//     printf("New Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     return 0;
//     }
//     else if (idx==a+1)
//     {
//             printf("Enter the element you want to insert at end:");
//             scanf("%d",&n);
//             node1=(struct node*)malloc(sizeof(struct node));
//             node1->data=n;
//             node1->link=NULL;
//             ptr=start;
//             while (ptr->link!=NULL)
//             {
//                ptr=ptr->link;
//             }
//             ptr->link=node1;
//             ptr=start;
//             printf("New Linked List is:");
//             while (ptr!=NULL)
//             {
//                printf("%d  ",ptr->data);
//                ptr=ptr->link;
//             }
//             return 0;
//     }
    
//     else if(idx>1 && idx<a+1)
//     {
//         printf("Enter the element you want to insert at %dth position:",idx);
//         scanf("%d",&n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         node1->link=NULL;
//         ptr=start;
//         int k=1;
//         while (k<idx)
//         {
//             temp=ptr;
//            ptr=ptr->link;
//            k++;
//         }
//         temp->link=node1;
//         node1->link=ptr;
//         ptr=start;
//         printf("New Linked List is:");
//         while (ptr!=NULL)
//         {
//            printf("%d  ",ptr->data);
//            ptr=ptr->link;
//         }
//         return 0;
//     }
//     else 
//     {
//         printf("Wrong index");
//         return 0;
//     }
//     return 0;
// }

//insert after the given item;

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*temp;
// int main()
// {
//     int n,a,item;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     printf("Enter the item after which you want to insert:");
//     scanf("%d",&item);
//     printf("Enter the element:");
//     scanf("%d",&n);
//     node1=(struct node*)malloc(sizeof(struct node));
//     node1->data=n;
//     node1->link=NULL;

//     ptr=start;
//     if(ptr->data==item)
//     {
//         temp=ptr->link;
//         ptr->link=node1;
//         node1->link=temp;

//         while (ptr!=NULL)
//         {
//             printf("%d ",ptr->data);
//             ptr=ptr->link;
//         }
//         return 0;
//     }

//     else{
//     ptr=start;
//     while (ptr->data!=item)
//     {
//        ptr=ptr->link;
//        temp=ptr->link;
//     }
//     ptr->link=node1;
//     node1->link=temp;
//     ptr=start;
//     while (ptr!=NULL)
//     {
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }
//     return 0;
// }

//Swap 1st node with the last node.
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *link;
// };struct node *start,*temp,*prev,*node1,*frist,*second;
// int main()
// {
//     int n,i=1;
//     char ch;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     printf("Enter y to continue:");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='Y'||ch=='y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         node1->link=NULL;
//         temp->link=node1;
//         temp=temp->link;
//         printf("Wnat to continue:");
//         scanf(" %c",&ch);
//     } 
//     frist=start;
//     temp=start;
//     while (temp->link!=NULL)
//     {
//         prev=temp;
//         temp=temp->link;
//     }
//     prev->link=frist;
//     start=temp;
//     temp->link=frist->link;
//     frist->link=NULL;
//         while (temp!=NULL)
//         {
//             printf("\n%d",temp->data);
//             temp=temp->link;
//         }
//     return 0;
// }


//Delete using index;

// #include<stdio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct node *link;
// };
// struct node *start,*ptr,*node1,*temp;
// int main()
// {
//     int n,a,idx;
//     printf("How many elements Want to enter:");
//     scanf("%d",&a);
//     if(a<=0)
//     {
//         printf("Error.");
//         return 0;
//     }
//     printf("Enter the Element:");
//     scanf("%d",& n);
//     start=(struct node*)malloc(sizeof(struct node));
//     start->data=n;
//     start->link=NULL;
//     ptr=start;
//     for (int i = 1; i < a; i++)
//     {
//         printf("Enter the Element:");
//         scanf("%d",& n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         ptr->link=node1;
//         ptr=ptr->link;    
//     }
//     ptr=start;
//     printf("Original Linked List is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
//     printf("Enter index of element want to delete:");
//     scanf("%d",& idx);
//     ptr=start;
    
//     if(idx==1)
//     {
//         ptr=ptr->link;
//         printf("After deletion list is:");
//         while (ptr!=NULL)
//         {
//            printf("%d  ",ptr->data);
//            ptr=ptr->link;
//         }
//         return 0;
//     }
//     else {
//     ptr=start;
//     int k=1;
//     while(k<idx)
//     {
//         temp=ptr;
//         ptr=ptr->link;
//         k++;
//     }
//     temp->link=ptr->link;
//     ptr=start;
//     printf("After deletion list is:");
//     while (ptr!=NULL)
//     {
//        printf("%d  ",ptr->data);
//        ptr=ptr->link;
//     }
// }
//     return 0;
// }


//Two-way linked-list

// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *forw;
//     struct node *back;
// };struct node *first,*last,*temp,*node1,*start;
// int main()
// {
//     int n;
//     char ch;
//     printf("Enter the element:");
//     scanf("%d",&n);
//     first=(struct node*)malloc(sizeof(struct node));
//     first->data=n;
//     first->back=NULL;
//     start=first;
//     printf("Enter y to continue");
//     scanf(" %c",&ch);
//     temp=start;
//     while (ch=='y'||ch=='Y')
//     {
//         printf("Enter the element:");
//         scanf("%d",&n);
//         node1=(struct node*)malloc(sizeof(struct node));
//         node1->data=n;
//         temp->forw=node1;
//         node1->back=temp;
//         temp=temp->forw;
//         node1->forw=NULL;
//         printf("Enter y to continue:");
//         scanf(" %c",&ch);
//     }
//     last=temp;
//     temp->forw=NULL;
//     temp=start;
//      printf("Traversing from initial:");
//     while (temp!=NULL)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->forw;
//     }
//     temp=last;
//     printf("Traversing from end:");
//     while (temp!=NULL)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->back;
//     }
//     return 0;
// }



//Stack

// #include<stdio.h>
// #define MAXSIZE 10
// int push(int stack[],int* top)
// {
//     int n;
//     if (*top==(MAXSIZE-1))
//     {
//         printf("Overflow");
//     }
//     else
//     {
//         printf("Enter the element");
//         scanf("%d",&n);
//         (*top)++;
//         stack[*top]=n;
//     }
//     return 0;
// }
// int pop(int stack[],int* top)
// {
//     if (*top==-1)
//     {
//         printf("underflow\n");
//     }
//     else
//     {
//         printf("deleting the last element");
//         (*top)--;
//     }
//     return 0;
// }
// int display(int stack[],int* top)
// {
//     int n;
//     if (*top==-1)
//     {
//         printf("not a single element present");
//     }
//     else
//     {
//         for (int  i = *top; i >=0; i--)
//         {
//             printf("%d\n",stack[i]);
//         }
        
        
//     }
//     return 0;
// }


// int main()
// {
//     int Stack[MAXSIZE];
//     int top=-1;
//     int choice;
   
//    do
//    {
//     printf("Enter 1 for push.\n Enter 2 for pop.\nEnter 3 for display.\n Enter 4 for Exit.");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         push(Stack,&top);
//         break;
       
//     case 2:
//         pop(Stack,&top);
//         break;

//     case 3:
//         display(Stack,&top);
//         break;
    
//     case 4:
//         break;
       
       
//     default:
//         printf("Invalid entry");
//         break;
//     }
//    } while (choice!=4);
   
//     return 0;
// }

//Queue
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 10

// void insert(int queue[], int *front, int *rear)
// {
//     if (*rear == SIZE - 1)
//     {
//         printf("Queue Overflow\n");
//         return;
//     }
//     else
//     {
//         if (*front == -1)
//             *front = 0; // Set front to first element if inserting first element
//         (*rear)++;
//         printf("Enter your element: ");
//         scanf("%d", &queue[*rear]);
//     }
// }

// void display(int queue[], int front, int rear)
// {
//     if (front == -1 || front > rear)
//     {
//         printf("Queue is empty\n");
//         return;
//     }
//     for (int j = front; j <= rear; j++)
//     {
//         printf("%d ", queue[j]);
//     }
//     printf("\n");
// }

// void delete(int queue[], int *front, int *rear)
// {
//     if (*front == -1 || *front > *rear)
//     {
//         printf("Queue Underflow\n");
//         return;
//     }
//     printf("Deleted element: %d\n", queue[*front]);
//     (*front)++;
//     if (*front > *rear)
//     {
//         *front = -1;
//         *rear = -1;
//     }
// }

// int main()
// {
//     int queue[SIZE];
//     int front = -1, rear = -1;
//     int choice;
    
//     do
//     {
//         printf("\nPress 1 for insertion.\nPress 2 for deletion.\nPress 3 for display.\nPress 4 for exit.\n");
//         scanf("%d", &choice);
        
//         switch (choice)
//         {
//         case 1:
//             insert(queue, &front, &rear);
//             break;
//         case 2:
//             delete(queue, &front, &rear);
//             break;
//         case 3:
//             display(queue, front, rear);
//             break;
//         case 4:
//             printf("Exiting...\n");
//             break;
//         default:
//             printf("Invalid entry.\n");
//             break;
//         }
//     } while (choice != 4);
    
//     return 0;
// }


//Linked-List Stack Push.
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int info;
//     struct node *link;
// };

// // Push operation (Insert at beginning — top of stack)
// void push(struct node **top) {
//     int n;
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
    
//     if (newNode == NULL) {
//         printf("Memory allocation failed\n");
//         return;
//     }

//     printf("Enter the Element: ");
//     scanf("%d", &n);

//     newNode->info = n;
//     newNode->link = *top;
//     *top = newNode;  // Update top to the new node
// }

// // Pop operation (Remove from top)
// void pop(struct node **top) {
//     if (*top == NULL) {
//         printf("Stack Underflow. Cannot pop from an empty stack.\n");
//         return;
//     }

//     struct node *temp = *top;
//     printf("Popped element: %d\n", temp->info);
//     *top = temp->link;
//     free(temp);
// }

// // Display stack from top to bottom
// void display(struct node *top) {
//     struct node *ptr = top;

//     if (ptr == NULL) {
//         printf("Stack is empty.\n");
//         return;
//     }

//     printf("Stack elements (Top to Bottom): ");
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->info);
//         ptr = ptr->link;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct node *top = NULL;
//     int choice;

//     do {
//         printf("\nEnter:\n1 for Push\n2 for Pop\n3 for Display\n4 for Exit\nChoice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 push(&top);
//                 break;
//             case 2:
//                 pop(&top);
//                 break;
//             case 3:
//                 display(top);
//                 break;
//             case 4:
//                 printf("Exiting...\n");
//                 break;
//             default:
//                 printf("Invalid choice.\n");
//         }
//     } while (choice != 4);

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int top;
    int stack[top];


    return 0;
}