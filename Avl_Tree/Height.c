#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};
struct node *start,*node1,*ptr,*prev,*root;
int max(int a,int b)
{
    int max;
    if (a>b)
    {
        return a;
    }
    else if (a==b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
void inorder(struct node *node)
{
    if (node==NULL)
    {
        return;
    }
    inorder(node->left);
    printf("%d ",node->info);
    inorder(node->right);
}
int height(struct node *root)
{
    if (root==NULL)
    {
       return -1;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);

}
int main()
{
    int n,a;
    printf("Enter the number of node: ");
    scanf("%d",& n);
    printf("Enter the element of node: ");
    scanf("%d",& a);
    node1=(struct node*)malloc(sizeof(struct node));
    node1->info=a;
    node1->left=NULL;
    node1->right=NULL;
    root=node1;
    ptr=root;
    for (int  i = 1; i < n; i++)
    {
        printf("Enter the element of node: ");
        scanf("%d",& a);
        node1=(struct node*)malloc(sizeof(struct node));
        node1->info=a;
        node1->left=NULL;
        node1->right=NULL;
        while (ptr!=NULL)
        {
            prev=ptr;
            if (node1->info < ptr->info)
            {
               ptr=ptr->left;
            }
            else if (node1->info > ptr->info)
            {
                ptr=ptr->right;
            }
            
            
        }
        
        if (node1->info < prev->info)
        {
            prev->left=node1;
        }
        else if (node1->info > prev->info)
        {
            prev->right=node1;
        }
        else if (prev->info == node1->info)
        {
            printf("Dublicate entry is not allowed.");   
        }
        ptr=root;
        
    }
    
    printf("Inorder traversal of tree.");
    inorder(root);

    //height.
    int height,item;
    printf("Enter the element to find the height: ");
    scanf("%d",& item);
    ptr=root;
    while (ptr->info!=item || ptr==NULL)
    {
        if (ptr->info < item)
        {
            ptr=ptr->right;
        }
        else if (ptr->info > item)
        {
            ptr=ptr->left;
        }    
    }

    int countLeft=0,countRight=0;
    // while (ptr!=NULL)
    // {
    //     ptr=ptr->left;
    //     countLeft++;
        
    // }
    // while (ptr!=NULL)
    // {
    //     ptr=ptr->right;
    //     countRight++;
    // }
    
    int p=height(ptr);
    //int p;
    //p=max(2,3);

    //printf("max: %d ",p);
    //printf("%d",ptr->info);
    printf("%d",p);
    return 0;

}