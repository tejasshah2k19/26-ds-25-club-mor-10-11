#include <iostream>
#include <vector>
#define SIZE 100

using namespace std;

int main()
{

    vector<int> v[SIZE];

    int totalNodes;
    int vertex;
    int src;

    cout << "\nEHow many vertex you have? ";
    cin >> totalNodes;

    for (int i = 0; i < totalNodes; i++)
    {
        cout << "\nEnter Vertex value ? ";
        cin >> vertex; // 10 100
        v[i].push_back(vertex);
    }

    for (int i = 0; i < totalNodes; i++)
    {
        cout << "\n"
             << v[i].at(0) << " is connected with ?";
        while (1)
        {
            cout<<"\nEnter Destination -1 For Exit";
            cin >> src;
            if (src == -1)
            {
                break;
            }else{
                v[i].push_back(src); 
            }
        }
    }

    

    return 0;
}