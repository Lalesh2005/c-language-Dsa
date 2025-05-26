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

// // Define structure for tree node
// typedef struct node {
//     int data;
//     struct node *left;
//     struct node *right;
// } Node;

// // Function to perform inorder traversal
// void inorder(Node *node) {
//     if (node == NULL) {
//         return;
//     }
//     inorder(node->left);
//     printf("%d ", node->data);  // Corrected printf statement
//     inorder(node->right);
// }

// int main() {
//     // Allocate memory for nodes
//     Node *node1 = (Node *)malloc(sizeof(Node));
//     Node *node2 = (Node *)malloc(sizeof(Node));
//     Node *node3 = (Node *)malloc(sizeof(Node));
//     Node *node4 = (Node *)malloc(sizeof(Node));
//     Node *node5 = (Node *)malloc(sizeof(Node));
//     Node *node6 = (Node *)malloc(sizeof(Node));

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

//     // Assign root
//     Node *root = node1;

//     // Perform inorder traversal
//     printf("Inorder Traversal: ");
//     inorder(root);
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



//    OR

#include <stdio.h>
#include <stdlib.h>

// Define structure for tree node without typedef
struct node {
    int data;
    struct node *left;
    struct node *right;
};struct node *node1,*node2,*node3,*node4,*node5,*node6;

// Function to perform inorder traversal
void inorder(struct node *node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d ", node->data);  // Corrected printf statement
    inorder(node->right);
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

    // Assign root
    struct node *root = node1;

    // Perform inorder traversal
    printf("Inorder Traversal: ");
    inorder(root);
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