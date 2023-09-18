#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    unordered_map<int, list<int> > adj;

    void addEdge(int u, int v, bool direction) {
        // if direction is 0 -> undirected;
        // if direction is 1 -> directed;

        //create an edge from u - v
        adj[u].push_back(v);

        if(direction == 0)
        adj[v].push_back(u);
    }   

    void printAdjList() {
        for(auto i: adj) {
            cout << i.first << "-> ";
            for(auto j: i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    } 
};
 
int main() {
    
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m; 
    cout << "Enter the number of edges: ";
    cin >> m;

    graph g;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        //creating a new graph;
        g.addEdge(u,v,0);
    }

    //pring graph
    g.printAdjList();
    
    return 0;
}

/*
Enter the number of nodes: 5
Enter the number of edges: 6
0 1
1 2
2 3
3 1
3 4
0 4
4-> 3, 0, 
3-> 2, 1, 4, 
2-> 1, 3, 
1-> 0, 2, 3, 
0-> 1, 4, 
*/