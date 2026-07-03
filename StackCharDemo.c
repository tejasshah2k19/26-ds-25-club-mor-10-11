#include <stdio.h>
#define SIZE 50

int top = -1;
char stack[SIZE];

void push(char data)
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
        printf("\n%c pop", stack[top]);
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
        printf("\n%c", stack[top]);
    }
}

void peep(int location)
{

    // empty
    int index = top - location + 1;
    // index 0 >= index <= SIZE-1
    printf(" %c ", stack[index]);
}

void display()
{
    printf("\nStack : ");
    for (int i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
    }
}

int main()
{

    char str[SIZE];

    printf("enter string : ");
    scanf("%s", &str); // r:0 o:1 y:2 a:3 l:4 '\0':5
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    display();

    return 0;
}
