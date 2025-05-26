#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};
struct node *ptr;
int main()
{
    struct node *root=NULL;
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the element:");
    scanf("%d",& x);
    root->data=x;
    ptr=root;
    while (x!='\0')
    {
        printf("Enter the element:");
        scanf("%d",& x);
        new_node->data=x;
        if(new_node->data < root->data)
        {
            root->left=new_node;
        }
        else if(new_node->data >= root->data)
        {
            root->right=new_node;
        }
        printf("Enter the element:");
        scanf("%d",& x);
        struct node *new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=x;
        while (ptr!=NULL)
        {
            if(x < ptr->data)
            {
                ptr=ptr->left;
            }
            else if(x>=ptr->data)
            {
                ptr=ptr->right;
            }
        }
        

    }
    return 0;
}