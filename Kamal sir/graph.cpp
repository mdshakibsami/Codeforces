#include <bits/stdc++.h>
using namespace std;

const int MAX_V = 100; // Maximum number of vertices

void addEdge(int g[MAX_V][MAX_V], int u, int v)
{
    g[u][v] = 1;
}

void printGraph(int g[MAX_V][MAX_V], int V)
{
    for (int u = 0; u < V; ++u)
    {
        bool hasC = false;
        for (int v = 0; v < V; ++v)
        {
            if (g[u][v])
            {
                hasC = true;
                break;
            }
        }
        if (hasC)
        {
            cout << "Vertex " << u << " connects to:";
            for (int v = 0; v < V; ++v)
            {
                if (g[u][v])
                {
                    cout << " " << v;
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    int V = 5; // Number of vertices
    int dG[MAX_V][MAX_V] = {0}; // Directed graph
    int uG[MAX_V][MAX_V] = {0}; // Undirected graph

    // Add edges for directed graph
    addEdge(dG, 0, 1);
    addEdge(dG, 0, 3);
    addEdge(dG, 1, 2);
    addEdge(dG, 2, 3);
    addEdge(dG, 3, 4);

    // Add edges for undirected graph
    addEdge(uG, 0, 1);
    addEdge(uG, 0, 3);
    addEdge(uG, 1, 2);
    addEdge(uG, 2, 3);
    addEdge(uG, 3, 4);
    addEdge(uG, 1, 0);
    addEdge(uG, 3, 0);
    addEdge(uG, 2, 1);
    addEdge(uG, 3, 2);

    cout << "Undirected Graph: \n";
    printGraph(uG, V);
    cout << "-------------------------------\n";
    cout << "Directed Graph: \n";
    printGraph(dG, V);

    return 0;
}
