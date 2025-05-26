#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d ", node->data);  // Corrected printf statement
    inorder(node->right);
}
int main() {
    struct node *root = NULL, *ptr, *prev;
    int x, a;

    printf("Enter the number of nodes: ");
    scanf("%d", &a);

    printf("Enter the element of root: ");
    scanf("%d", &x);

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->left = NULL;
    new_node->right = NULL;

    root = new_node;

    for (int i = 1; i < a; i++) {
        printf("Enter the element: ");
        scanf("%d", &x);

        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = x;
        new_node->left = NULL;
        new_node->right = NULL;

        ptr = root;

        while (ptr != NULL) {
            prev = ptr;
            if (x < ptr->data)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }
        if (x < prev->data)
            prev->left = new_node;
        else
            prev->right = new_node;
    }
    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");
    int item,b=-1;
    printf("Enter the Element to be serched:");
    scanf("%d",& item);
    ptr=root;
    while (ptr!=NULL)
    {
        prev=ptr;
       if (item > ptr->data)
       {
         ptr=ptr->right;
       }
       else if (item < ptr->data)
       {
            ptr=ptr->left;
       }
       else if (item == ptr->data)
       {
        b=1;
        break;
       }   
    }
    if (b==-1)
    {
        printf("element does not found.");
    }
    else if (b==1)
    {
        printf("element found.");
    }
    if((ptr->left==NULL )&&  (prev->right==NULL))
    {
        if (ptr->data < prev->data)
        {
           prev->left=NULL;
        }
        else
        {
            prev->right=NULL;
        }
    }
    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");
    return 0;
}