/*
   Original Tree          Modified Tree
       10                     1
      /  \                   /  \
    12    15               2     3
   /  \     \             / \     \
  25   30    36         4   5      6

   Left tree: Original values
   Right tree: Values replaced as requested
*/

// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for tree node without typedef
// struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// };struct node *node1,*node2,*node3,*node4,*node5,*node6,*ptr;


// int main() {
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

    
//     struct node *root = node1;

    
//     ptr=root;
//     int top=1;
//     int stack[1]=NULL;


//     printf("%d",ptr->data);
//     if (ptr->right!=NULL)
//     {
//        ptr=ptr->right;
    

//     if(ptr->right!=NULL)
//     {
//         ptr=ptr->right;
//         while (ptr!=NULL)
//         {
//             top=top+1;
//             stack[top]=ptr;
//             ptr=ptr->left;
//         }
//         ptr=stack[top];
//         top=top-1;
//     }
//     ptr=stack[top];
//     top=top-1;
//     }
    
//     // Free allocated memory
//     free(node1);
//     free(node2);
//     free(node3);
//     free(node4);
//     free(node5);
//     free(node6);

//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>

// Define structure for tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Global node pointers
struct node *node1, *node2, *node3, *node4, *node5, *node6;

// Function for iterative inorder traversal
void inorderTraversal(struct node *root) {
    struct node *stack[100];  // Stack for traversal
    int top = -1;             // Stack pointer

    struct node *ptr = root;  // Start from the root

    while (ptr != NULL || top >= 0) {
        // Reach the leftmost node of the current subtree
        while (ptr != NULL) {
            stack[++top] = ptr;
            ptr = ptr->left;
        }

        // Pop the top node from the stack
        ptr = stack[top--];

        // Print the node's value
        printf("%d ", ptr->data);

        // Move to the right subtree
        ptr = ptr->right;
    }
}

int main() {
    // Allocate memory for nodes
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));
    node5 = (struct node *)malloc(sizeof(struct node));
    node6 = (struct node *)malloc(sizeof(struct node));

    // Assign data values
    node1->data = 10;
    node2->data = 12;
    node3->data = 15;
    node4->data = 25;
    node5->data = 30;
    node6->data = 36;

    // Connect nodes to form the tree
    node1->left = node2;
    node1->right = node3;
    
    node2->left = node4;
    node2->right = node5;

    node3->left = NULL;
    node3->right = node6;

    node4->left = NULL;
    node4->right = NULL;

    node5->left = NULL;
    node5->right = NULL;

    node6->left = NULL;
    node6->right = NULL;

    // Root node
    struct node *root = node1;

    // Perform iterative inorder traversal
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    free(node6);

    return 0;
}