
// #include<stdio.h>
// #include<stdlib.h>

// int main(){

//     int a; //4 byte 
//     int b; //4 byte 
//     int *q; 
//     //pointer 
//     int *p;
//     p = (int*) malloc(sizeof(int)); //GCC : 4 , TC : 2 


//     printf("Enter number");
//     scanf("%d",p); 

//     printf("\np = %d",*p); 
//     return 0; 
// }




#include<stdio.h>
#include<stdlib.h>

int main(){

    int *a; //4 byte 
    int *b; //4 byte 
    a = (int*) malloc(sizeof(int)); //GCC : 4 , TC : 2 
    b = (int*) malloc(sizeof(int));

    printf("Enter two numbers");
    scanf("%d%d",a,b); 

    printf("\np = %d",*a + *b); 
    return 0; 
}