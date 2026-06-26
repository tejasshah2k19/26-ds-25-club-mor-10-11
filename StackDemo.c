#include <stdio.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nPOP::STACK EMPTY");
    }
    else
    {
        printf("\n%d pop", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nPEEK::STACK EMPTY");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

void peep(int location){

    int index = top-location + 1;
    printf(" %d ",stack[index]); 

}


void display()
{
    printf("\nStack : ");
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display(); // 30 20 10
    push(40);
    push(50);
    push(60);  // OVERFLOW
    display(); // 50 40 30 20 10
    pop();
    pop();
    pop();
    pop();
    pop();
    pop(); // UNDERFLOW

    return 0;
}