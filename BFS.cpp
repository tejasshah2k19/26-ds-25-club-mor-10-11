#include <iostream>
#include <vector>

using namespace std;
class Edge
{
public:
    int src, dest;
};

vector<Edge> v;

vector<int> visited;

int totalEdges;
int totalVertex; 
int count = 0;

int checkForVisit(int v)
{ // 10

    for (auto x : visited)
    {
        if (x == v)
        {
            return 0;
        }
    }
    return 1;
}

void bfs(int src) // 5
{

    for (int i = 0; i < totalEdges * 2; i++)
    {

        if (v.at(i).src == src && checkForVisit(v.at(i).dest)) // 5 - 10
        {

            visited.push_back(v.at(i).dest);
            cout << " " << v.at(i).dest; // 10 20
        }
    }
    count++;
    if(count < totalVertex)
        bfs(visited.at(count));
}

int main()
{

    int i;
    int src, dest;

    cout << "\nHow many vertex you have?";
    cin>>totalVertex; 
    cout << "\nHow many edges you have?";
    cin >> totalEdges; // 4

    for (i = 1; i <= totalEdges; i++)
    {
        cout << "\nEnter src and dest";
        cin >> src >> dest; // 10 5
        Edge e;
        e.src = src;
        e.dest = dest;
        v.push_back(e);

        Edge e2;
        e2.src = dest;
        e2.dest = src;
        v.push_back(e2);
    }

    cout << "\nstart ? ";
    cin >> src;
    visited.push_back(src); // 5
    cout << "BFS  : ";
    cout << src; // 5
    bfs(src);    // 5

    return 0;
}