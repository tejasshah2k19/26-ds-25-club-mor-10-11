#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

void addNode(int num)
{

    struct node *tmp;

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct node *p = head;

    printf("\nLinkedList => ");
    while (p != NULL)
    {
        printf(" %d ", p->data); // 10 20 30 40 50
        p = p->next;             //
    }
}
void addNodeBeg(int num)
{
    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}

void search(int value)
{

    struct node *p = head;
    int found = 0; // not found
    while (p != NULL)
    {
        if (p->data == value)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        printf("\n%d present", value);
    }
    else
    {
        printf("\n%d not present", value);
    }
}

void insertAtAny(int source, int data)
{
 
    struct node *p = head;

    if(last->data == source){
        addNode(data);
        return; 
    }
    while (p!=NULL)
    {
        if (p->data == source)
        {
            // newNode
            struct node *newNode = (struct node*) malloc(sizeof(struct node)); 
            newNode->data = data; 
            newNode->next = p->next; 
            p->next = newNode; 
        }
        p = p->next;
    }
}

void removeBeg(){
    struct node *p = head;
    head = p->next; 
    free(p);

}

void removeLast(){

    struct node *p = head; 
    while(p->next != last){
        p=p->next; 
    }

    last = p; 
    p=p->next;
    last->next=NULL;
    free(p);
}

int main()
{

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);

    display();
    addNodeBeg(100);
    display(); // 100 10 20 30 40 50

    search(55); // not present
    search(30); // present
    insertAtAny(40, 400);
    
    display();//100 10 20 30 40 400 50 

    removeBeg();//

    display();//10 20 30 40 400 50 

    removeLast();

    display();//10 20 30 40 400 

    return 0;
}
