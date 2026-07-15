#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enQueue(int data)
{
    if (front == 0 && rear == SIZE - 1)
    {
        printf("\nQueue is Full for %d ", data);
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is Full for %d ", data);
    }
    else if (rear == SIZE - 1 && front != 0)
    {
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
        if (front == -1)
        {
            front = 0;
        }
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nQueue empty");
    }
    else if (front == rear)
    {
        printf("\n%d removed", queue[front]);
        front = -1;
        rear = -1;
    }
    else if (front == SIZE - 1)
    {
        printf("\n%d removed", queue[front]);
        front = 0;
    }
    else
    {
        printf("\n%d removed", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("\nQueue empty");
    }
    else if (front <= rear)
    {
        printf("\nQueue Data : ");
        for (int i = front; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
    else
    {

        printf("\nQueue Data : ");
        for (int i = front; i < SIZE; i++)
        {
            printf(" %d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++)
        {
            printf(" %d ", queue[i]);
        }
    }
}
int main()
{

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    display();   // 10 20 30 40 50
    enQueue(60); // 60 full
    deQueue();   // 10
    deQueue();   // 20
    deQueue();   // 30
    enQueue(60);
    enQueue(70);
    display(); // 40 50 60 70

    return 0;
}