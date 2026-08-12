// #include<stdio.h>

// struct student {
//     char name[30];
//     int maths;
//     int sci;
//     int eng;
//     float perc;
//     char grade;
// };

// int main(){

//     struct student s;//name maths sci eng perc grade

//     printf("\nEnter name and marks of three subjects: ");
//     scanf("%s%d%d%d",&s.name,&s.maths,&s.sci,&s.eng);

//     printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d",s.name,s.maths,s.sci,s.eng);

// }

// #include <stdio.h>

// struct student
// {
//     char name[30];
//     int maths;
//     int sci;
//     int eng;
//     float perc;
//     char grade;
// };

// int main()
// {

//     int x;
//     int *p;
//     p=&x;

//     struct student s[5]; // name maths sci eng perc grade

//     for (int i = 0; i < 2; i++)
//     {
//         printf("\nEnter name and marks of three subjects: ");
//         scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);
//     }

//     printf("\nName\tMaths\tSci\tEng");
//     for (int i = 0; i < 2; i++)
//     {
//         printf("\n%s\t%d\t%d\t%d", s[i].name, s[i].maths, s[i].sci, s[i].eng);
//     }
// }

// #include<stdio.h>

// struct student {
//     char name[30];
//     int maths;
//     int sci;
//     int eng;
//     float perc;
//     char grade;
// };

// int main(){

//     struct student s;//name maths sci eng perc grade
//     struct student *p;
//     p = &s;

//     printf("\nEnter name and marks of three subjects: ");
//     scanf("%s%d%d%d",&p->name,&p->maths,&p->sci,&p->eng);

//     printf("\nName = %s\nMaths = %d\nSci = %d\nEng = %d",p->name,p->maths,p->sci,p->eng);

// }

#include <stdio.h>
#define SIZE 2

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

int main()
{

     

    struct student s[SIZE]; // name maths sci eng perc grade
    struct student *p;

    p = &s[0];//500

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter name and marks of three subjects: ");
        scanf("%s%d%d%d", &p->name, &p->maths, &p->sci, &p->eng);
        p++;//s[1] => 700 
    }

    p = &s[0];

    printf("\nName\tMaths\tSci\tEng");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n%s\t%d\t%d\t%d", p->name, p->maths, p->sci, p->eng);
        p++;
    }
}
