#include <stdio.h>
#include <stdlib.h>

// self ref structure

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int data)
{
    struct node *tmp;

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = data;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void searchNode(int data)
{

    struct node *tmp = head;
    int found = 0; // X
    while (tmp != NULL)
    {
        if (tmp->data == data)
        {
            found = 1; // Yes
            break;
        }
        tmp = tmp->next;
    }

    if (found == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot found");
    }
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);

    printf(" %d %d %d %d", head->data, head->next->data, head->next->next->data, head->next->next->next->data);

    searchNode(50);
    return 0;
}