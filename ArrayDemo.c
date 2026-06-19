#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void insert(int location, int data)
{
    int found = 0; // no

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == data)
        {
            found = 1;//yes 
            break;
        }
    }

    if (found == 1)
    {
        printf("\n%d is already present in the array ", data);
    }
    else
    {
        int index = location - 1;

        for (int i = SIZE - 1; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = data;
    }
}

void display()
{
    printf("\nElements in the Array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void removeItem(int location)
{
    int index = location - 1;

    for (int i = index; i < SIZE; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(4, 40);
    insert(5, 50);

    display(); // 10 20 30 40 50

    removeItem(1);

    display(); // 20 30 40 50

    insert(3,50); 
    insert(3,10); // 
    display(); //20 30 10 40 50 

    return 0;
}