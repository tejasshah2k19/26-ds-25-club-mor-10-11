#include <iostream>

using namespace std;

int graph[5][5] = {
    {0, 7, 0, 0, 1}, {7, 0, 3, 0, 8}, {0, 3, 0, 6, 2}, {0, 0, 6, 0, 7}, {1, 8, 2, 7, 0}};

int totalVertex = 5;

int visited[5];

int dist[5];
// 0 1 2 3 4
// 0 ~ ~ ~ ~

int initialVertex = 0;

int main()
{

    int i;
    int dest;
    // how many vertex you have ?
    // scanf

    // grpah
    // scan = matrix

    for (i = 0; i < totalVertex; i++)
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    // start?
    // scanf -> initialVertex

    dist[initialVertex] = 0;

    // 0 1 2 3 4

    for (int count = 0; count < totalVertex - 1; count++)
    {
        dest = -1;
     
        
        for (i = 0; i < totalVertex; i++)
        {
            if ( !visited[i] && (dest == -1 || dist[i] < dist[dest]))
            {
                dest = i;
            }
        }
        
        if (dest == -1 || dist[dest] == INT_MAX)
        {
            break;
        }

        visited[dest] = 1;
      
        for (int v = 0; v < totalVertex; v++)
        {
            if (graph[dest][v] != 0 && !visited[v] && dist[dest] + graph[dest][v] < dist[v])
            {
                dist[v] = dist[dest] + graph[dest][v];
            }
        }
    }

    cout << "\nFinal dist : ";
    for (i = 0; i < totalVertex; i++)
    {
        cout<<endl<<i<<" ";
        if(dist[i] == INT_MAX){
            cout<<" : unrechable "; 
        }else{
            cout<<" : "<<dist[i];
        }
    }
    return 0;
}