#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node* addNode(struct node *root, int data)  //NULL,80 
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if (data > root->data) // 80 > 70
        {
            root->right = addNode(root->right, data);
            //70->right = addNode(NULL,80) 
        }
        else
        {
            root->left = addNode(root->left, data);
        }
    }

    return root;
}

int main()
{

    root = addNode(root, 50); // NULL,50
    addNode(root, 70);        // 50,70
    addNode(root, 80);        // 50,80
    addNode(root, 30);        // 50,30
    addNode(root, 20);        // 50,20

    printf("\n%d  %d  %d %d ",root->left->data, root->data,root->right->data,root->right->right->data);//30 50 70 80  
    //inOrder(root); 
    
    return 0;
}