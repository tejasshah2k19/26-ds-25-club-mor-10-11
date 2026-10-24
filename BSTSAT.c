#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *addNode(struct node *current, int val) // current = NULL, val = 150
{

    if (current == NULL)
    {
        current = (struct node *)malloc(sizeof(struct node));
        current->data = val;
        current->left = NULL;
        current->right = NULL;
        return current;
    }
    else
    {
        if (val > current->data) // 150 > 50  , 150 > 90
        {
            // right
            current->right = addNode(current->right, val); // NULL,90
            // 50->right = addNode(50->right,150)
            // 90->right = addNode(90->right,150);
        }
        else
        {
            // left
            current->left = addNode(current->left, val); // left
        }
    }
    return current;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

void search(struct node *root, int key)
{ // 50,200

    if (root == NULL)
    {
        printf(" Not Found ");
    }
    else if (key == root->data)
    {
        printf("  Found ");
    }
    else
    {
        if (key > root->data)
        {
            // right
            search(root->right, key);
        }
        else
        {
            search(root->left, key);
        }
    }
}

struct node *deleteNode(struct node *root, int key) // 150 150
{

    if (root == NULL)
    {
        printf(" Not Found ");
    }
    else if (key == root->data)
    {
        printf("  Found ");

        if (root->left == NULL && root->right == NULL)
        {
            // zero child
            free(root);
            return NULL;
        }
        else if (root->left != NULL && root->right != NULL)
        {
            // two child
            
        }
        else
        {
            // single child
            if (root->left == NULL)
            {
                
                return root->right;
                
            }
            else
            {
                return root->left;
            }
        }
    }
    else
    {
        if (key > root->data) // 150 > 50 , 150 > 90
        {
            // right
            root->right = deleteNode(root->right, key);
        }
        else
        {
            root->left = deleteNode(root->left, key);
        }
    }
}

int main()
{

    root = addNode(root, 50); // NULL , 50
    addNode(root, 90);        // 90,50
    addNode(root, 150);       // 50 , 150
    addNode(root, 30);
    addNode(root, 20);
    addNode(root, 35);

    // printf("\n%d ", root->data);
    // printf("\n%d ", root->right->data);
    // printf("\n%d ", root->right->right->data);
    // printf("\n%d ", root->left->data);

    // tree ->
    // inOrder->  left : root : right
    // preOrder-> root : left : right
    // postOrder-> left: right : root

    inOrder(root);

    search(root, 30);
    search(root, 150);
    search(root, 500);
    search(root, 10);

    // deleteNode(root, 30);

    return 0;
}