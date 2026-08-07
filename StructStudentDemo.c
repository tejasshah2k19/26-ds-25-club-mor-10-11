#include <stdio.h>
#define SIZE 5

struct student
{
    char name[30];
    int maths;
    int sci;
    int eng;
    float perc;
    char grade;
};

struct student s[SIZE];

void getData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter name and marks of three subjects ");
        scanf("%s%d%d%d", &s[i].name, &s[i].maths, &s[i].sci, &s[i].eng);
    }
}

void calculateGrade()
{

    for (int i = 0; i < SIZE; i++)
    {
        s[i].perc = (s[i].maths + s[i].sci + s[i].eng) / 3.0;

        if (s[i].perc >= 35)
        {
            s[i].grade = 'P';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}

void printData()
{
    printf("\nName\tMaths\tSci\tEng\tPerc\tGrade");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n%s\t%d\t%d\t%d\t%.2f\t%c", s[i].name, s[i].maths, s[i].sci, s[i].eng, s[i].perc, s[i].grade);
    }
}

int main()
{

    getData();
    calculateGrade();
    printData();
    return 0;
}