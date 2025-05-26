#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *left;
    struct Node *right;
    int  height;
};
int getHeight(struct Node *n)
{
    if (n==NULL)
    {
        return 0;
    }
    return n->height;
    
}
struct Node* createNode(int key)
{
    struct Node* Node=(struct Node*)malloc(sizeof(struct Node));
    Node->info=key;
    Node->left=NULL;
    Node->right=NULL;
}
int getBalance(struct Node *n)
{
    if (n==NULL)
    {
        return 0;
    }
    return getHeight(n->left)- getHeight(n->right);
    
}
struct Node* rightRotate(struct Node* y)
{
    struct Node* x=y->left;
    struct Node* t2=x->right;
    x->right=y;
    y->left=t2;

    
}
int main()
{
    return 0;
}