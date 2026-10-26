#include <stdio.h>

int graph[4][4];

int main()
{

    int i, j;
    int src, dest;
    int totalEdges;
    // for(i=0;i<4;i++){
    //     for(j=0;j<4;j++){
    //         printf("\n %d is connected with %d ? ",i,j);
    //         scanf("%d",&graph[i][j]);
    //     }
    // }

    printf("\nHow many edges you have?");
    scanf("%", &totalEdges); // 5

    for (i = 1; i <= totalEdges; i++)
    {
        printf("\nEnter source and destination");
        scanf("%d%d", &src, &dest); // 2 0
        graph[src][dest] = 1;
        graph[dest][src] = 1;
    }

    printf("\nEnter source");
    scanf("%d", &src); // 0
    printf("\nEnter destination");
    scanf("%d", &dest); // 3

    if (graph[src][dest] == 1)
    {
        printf("\nConnected");
    }
    else
    {
        printf("\nNot connected");
    }

    return 0;
}