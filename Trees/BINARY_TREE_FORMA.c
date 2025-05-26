// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int data;
//    struct node *left;
//    struct node *right;
// };
// struct node *ptr,*prev;
// int main()
// {
//     struct node *root=NULL;
//     struct node *new_node=(struct node*)malloc(sizeof(struct node));
//     int x,a;
//     printf("Enter the number of node:");
//     scanf("%d",& a);
//     printf("Enter the element:");
//     scanf("%d",& x);

//     //root->data=x;
//     new_node->data=x;
//     new_node->left=NULL;
//     new_node->right=NULL;
//     root=new_node;
//     ptr=root;
//     for(int i=0;i<a;i++)
//     {

//         printf("Enter the element:");
//         scanf("%d",& x);
//         struct node *new_node=(struct node*)malloc(sizeof(struct node));
//         new_node->data=x;
//         new_node->left=NULL;
//         new_node->right=NULL;
//         while (ptr!=NULL)
//         {
//             if(x < ptr->data)
//             {
//                 prev=ptr;
//                 ptr=ptr->left;
//             }
//             else if(x>=ptr->data)
//             {
//                 prev=ptr;
//                 ptr=ptr->right;
//             }
//         }
//         if(x < ptr->data)
//         {
//             prev->left=new_node;
//         }
//         else if(x >=ptr->data)
//         {
//             prev->right=new_node;
//         }
//         ptr=root;
//         printf("Enter the element:");
//         scanf("%d",& x);

//     }
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// void inorder(struct node *node) {
//     if (node == NULL) {
//         return;
//     }
//     inorder(node->left);
//     printf("%d ", node->data);  // Corrected printf statement
//     inorder(node->right);
// }
// int main() {
//     struct node *root = NULL, *ptr, *prev;
//     int x, a;

//     printf("Enter the number of nodes: ");
//     scanf("%d", &a);

//     printf("Enter the element of root: ");
//     scanf("%d", &x);

//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     new_node->data = x;
//     new_node->left = NULL;
//     new_node->right = NULL;

//     root = new_node;

//     for (int i = 1; i < a; i++) {
//         printf("Enter the element: ");
//         scanf("%d", &x);

//         new_node = (struct node*)malloc(sizeof(struct node));
//         new_node->data = x;
//         new_node->left = NULL;
//         new_node->right = NULL;

//         ptr = root;

//         while (ptr != NULL) {
//             prev = ptr;
//             if (x < ptr->data)
//                 ptr = ptr->left;
//             else
//                 ptr = ptr->right;
//         }

//         if (x < prev->data)
//             prev->left = new_node;
//         else
//             prev->right = new_node;
//     }
//     printf("Inorder Traversal: ");
//     inorder(root);
//     printf("\n");
//     int item,b=-1;
//     printf("Enter the Element to be serched:");
//     scanf("%d",& item);
//     ptr=root;
//     while (ptr!=NULL)
//     {
//        if (item > ptr->data)
//        {
//          ptr=ptr->right;
//        }
//        else if (item < ptr->data)
//        {
//             ptr=ptr->left;
//        }
//        else if (item == ptr->data)
//        {
//         b=1;
//         break;
//        }
     
       
//     }
//     if (b==-1)
//     {
//         printf("element does not found.");
//     }
//     else if (b==1)
//     {
//         printf("element found.");
//     }
    
    
//     return 0;
// }




#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node  *left;
   struct node  *right;
};
void inorder(struct node *node) {
        if (node == NULL) {
            return;
        }
        inorder(node->left);
        printf("%d ", node->data);  // Corrected printf statement
        inorder(node->right);
    }
struct node *root,*new_node,*ptr,*prev,*loc,*succ;

int main()
{
    int n;
    root=NULL;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    new_node=(struct node*)malloc(sizeof (struct node));
    int a;
    printf("Enter the element: ");
    scanf("%d",&a);
    new_node->data=a;
    new_node->left=NULL;
    new_node->right=NULL;
    ptr=new_node;
    root=new_node;
    for (int  i = 1; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a);
        new_node=(struct node*)malloc(sizeof (struct node));
        new_node->data=a;
        new_node->left=NULL;
        new_node->right=NULL;
        while (ptr!=NULL)
        {
            prev=ptr;
            if(ptr->data < new_node->data)
        {
            ptr=ptr->right;
        }
        else if (ptr->data > new_node->data)
        {
            ptr=ptr->left;
        }
        
        }
        
        if(prev->data < new_node->data)
        {
            prev->right=new_node;
        }
        else if (prev->data > new_node->data)
        {
            prev->left=new_node;
        }
        ptr=root;
        prev=root;
    }
    
    printf("Inorder Traversal: ");
    inorder(root);

    //Insertion
    printf("Enter the element want to insert: ");
    scanf("%d",& a);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=a;
    ptr=root;
    prev=ptr;
    while (ptr!=NULL)
    {
        prev=ptr;
        if (ptr->data < new_node->data)
        {
            ptr=ptr->right;
        }
        else if (ptr->data > new_node->data)
        {
            ptr=ptr->left;
        }    
    }
    if (prev->data < new_node->data)
    {
        prev->right=new_node;
    }
    else if (prev->data > new_node->data)
    {
        prev->left=new_node;
    }    
    printf("Inorder Traversal: ");
    inorder(root);

    //Deletion.

    
    printf("Enter the item wants to be deleted: ");
    scanf("%d",& a);
    ptr=root;
    prev=ptr;

    //searching function
    while (ptr->data!=a)
    {
        
        if (ptr->data > a)
        {
            prev=ptr;
            ptr=ptr->left;
            succ=ptr->left;
        }
        else if (ptr->data < a)
        {
            prev=ptr;
            ptr=ptr->right;
            succ=ptr->right;
        }
    }

    loc=ptr;

    //no child deletion concept
    if (ptr->left==NULL && ptr->right==NULL)
    {
        if (prev->data > ptr->data)
        {
            prev->left =NULL;
        }
        else
        {
            prev->right=NULL;
        }
    }

    // one child deletion concept
     else if (ptr->left==NULL && ptr->right!=NULL)
    {
        if (prev->data > ptr->data)
        {
            prev->left =succ;
            free(ptr);
        }
        else
        {
            prev->right=succ;
            free(ptr);
        }
    }

    else if (ptr->left!=NULL && ptr->right==NULL)
    {
        if (prev->data > ptr->data)
        {
            ptr->left =succ;
            free(ptr);
        }
        else
        {
            ptr->right=succ;
            free(ptr);
        }
    }

    // Two child deletion.

else if (ptr->left != NULL && ptr->right != NULL)
{
    struct node *succParent = ptr;
    struct node *succ = ptr->right;

    // Find the inorder successor (leftmost node in right subtree)
    while (succ->left != NULL)
    {
        succParent = succ;
        succ = succ->left;
    }

    // Copy successor's data into node to be deleted
    ptr->data = succ->data;

    // Delete the successor node (which has at most one child)
    if (succParent->left == succ)
    {
        if (succ->right != NULL)
            succParent->left = succ->right;
        else
            succParent->left = NULL;
    }
    else
    {
        // successor is right child of the node to delete
        succParent->right = succ->right;
    }

    free(succ);
}

    printf("Item:%d ",ptr->data);
    printf("Prev:%d ",prev->data);
    printf("succ:%d ",succ->data);

    printf("Inorder Traversal: ");
    inorder(root);
    return 0;
}