#include <stdio.h>

// void print()
// {
//     printf(" Hi ");
//     print(); // recursion
// }

void pingPong()
{
    printf("ping pong");
}

void pong()
{
    printf(" pong ");
    pingPong();
    printf(" pong  end ");
}

void ping()
{
    printf(" ping ");
    pong();
    printf(" ping end ");
}

void greet(int count)
{                   // 3
    printf(" hi "); // hi hi  hi
    count++;        // 4
    if (count <= 3)
    {
        greet(count); // 3
    }
}


void print(int count)
{                   // 3
    printf(" %d ",count); // hi hi  hi
    count++;        // 4
    if (count <= 3)
    {
        print(count); // 3
    }
}
void santa(int count){

}

int main()
{

    // greet(1);
    print(1);//1 2 3 

    santa(5);//5 4 3 2 1 
    return 0;
}

// infinite
// stack overflow
// BASE_CASE