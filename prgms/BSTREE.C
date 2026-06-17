#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
int data;
struct node *left;
struct node *right;
};

struct node* create_node(int value) {
struct node *newnode = (struct node*) malloc(sizeof(struct node));

newnode->data = value;
newnode->left = NULL;
newnode->right = NULL;

return newnode;
}

struct node* insert(struct node *root, int value) {
if (root == NULL) {
return create_node(value);
}

if (value < root->data) {
root->left = insert(root->left, value);
}
else {
root->right = insert(root->right, value);
}

return root;
}

void preorder(struct node *root) {
if (root != NULL) {
printf("%d -> ", root->data);
preorder(root->left);
preorder(root->right);
}
}

void inorder(struct node *root) {
if (root != NULL) {
inorder(root->left);
printf("%d -> ", root->data);
inorder(root->right);
}
}

void postorder(struct node *root) {
if (root != NULL) {
postorder(root->left);
postorder(root->right);
printf("%d -> ", root->data);
}
}
void main() {
struct node *root = NULL;
int n, value, i;

printf("Enter number of nodes: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter value: ");
scanf("%d", &value);
root = insert(root, value);
}

printf("\nPreorder Traversal:\n");
preorder(root);

printf("\n\nInorder Traversal:\n");
inorder(root);

printf("\n\nPostorder Traversal:\n");
postorder(root);
getch();
}
