//          1
//          / \
//          2   3
//          / \
//          4   5
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};
struct node *node1,*node2,*node3,*node4,*node5,*root,*ptr;

int main()
{
    node1=(struct node *)malloc(sizeof(struct node));
    node2=(struct node *)malloc(sizeof(struct node));
    node3=(struct node *)malloc(sizeof(struct node));
    node4=(struct node *)malloc(sizeof(struct node));
    node5=(struct node *)malloc(sizeof(struct node)); 
    

    node1->info=1;
    node2->info=2;
    node3->info=3;
    node4->info=4;
    node5->info=5;

    node1->left=node2;
    node1->right=node3;

    node2->left=node4;
    node2->right=node5;

    node3->left=NULL;
    node3->right=NULL;

    node4->left=NULL;
    node4->right=NULL;

    node5->left=NULL;
    node5->right=NULL;

    root = node1;
    ptr = root;
    struct node *stack[100];

    int top=-1;
   while (ptr!=NULL || top>=0)
   {
    while (ptr!=NULL)
    {
        stack[++top]=ptr;
        ptr=ptr->left;
    }
    ptr=stack[top--];
    printf("%d ",ptr->info);
    ptr=ptr->right;
    
   }
   printf("\n");
    return 0;
}