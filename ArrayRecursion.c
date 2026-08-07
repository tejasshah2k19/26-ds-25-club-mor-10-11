#include <stdio.h>
#define SIZE 5

int arr[] = {10, 20, 40, 30, 5}; // 105

void print(int start, int end)
{ // 3 10

    printf(" %d ", start); // 1 2
    start++;               // 3

    if (start <= end)
    {
        print(start, end);
    }
}

void arraySum(int i, int sum) // 1 10
{

    sum = sum + arr[i]; // sum = 30
    i++;                // 2
    if (i < SIZE)
    {
        arraySum(i, sum); // 2 30
    }
    else
    {
        printf("\nsum = %d ", sum);
    }
}

void arrayMax(){

}

int main()
{

    // this function need to implement via recursion
    // print(1, 10); // 1 2 3 4 5 6 ...10
    // print(5, 12); // 5 6 7 ... 12

    // arraySum =>
    arraySum(0, 0);//  
 
    // arrayMax()// 40
    return 0;
}