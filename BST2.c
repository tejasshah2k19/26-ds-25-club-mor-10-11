#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *addNode(struct node *currentRoot, int val)
{ // 100 , 200
    if (currentRoot == NULL)
    { // 100
        currentRoot = (struct node *)malloc(sizeof(struct node));
        currentRoot->data = val;
        currentRoot->left = NULL;
        currentRoot->right = NULL;
        return currentRoot;
    }
    else
    {
        // right
        if (val > currentRoot->data)
        {
            currentRoot->right = addNode(currentRoot->right, val);
        }
        else
        {
            // left
            currentRoot->left = addNode(currentRoot->left, val);
        }
        return currentRoot; 
    }
}

void inOrder(struct node *root){

    if(root!=NULL){ 
        inOrder(root->left);
        printf(" %d ",root->data); 
        inOrder(root->right);
    }
}
int main()
{

    root = addNode(root, 100);
    addNode(root, 200);
    addNode(root, 50);
    addNode(root, 30);
    addNode(root, 60);
    addNode(root, 150);
    addNode(root, 300);

    // printf("\n %d ", root->data);        // 100
    // printf("\n %d ", root->right->data); // 200
    // printf("\n %d ", root->left->data);  // 50

    // printf("\n %d ", root->left->left->data);  // 30
    // printf("\n %d ", root->left->right->data); // 60

    //inOrder 
    //preOrder
    //postOrder
    inOrder(root);
    return 0;
}
