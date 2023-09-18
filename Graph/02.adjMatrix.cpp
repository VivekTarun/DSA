#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the value of nodes: ";
    cin >> n;

    vector<vector<int> > adj(n, vector<int>(n, 0));

    int e;
    cout << "Enter the value of edges: ";
    cin >> e;

    for(int i = 0; i<e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
    }
    cout << endl << "Matrix of the graph" << endl;
    for(int i = 0; i<n; i++) {
        
        for(int j = 0; j<n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}