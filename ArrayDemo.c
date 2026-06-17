#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void insert(int location, int data)
{
    int index = location - 1; 

    for(int i=SIZE-1; i>index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = data; 
}

void display()
{
    printf("\nElements in the Array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    insert(1, 10);
    insert(2, 20);
    insert(3, 30);

    display(); // 10 20 30

    insert(1, 100);

    insert(2, 200);

    display(); // 100 200 10 20 30

    return 0;
}