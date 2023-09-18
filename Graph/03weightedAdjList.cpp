#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph {
    unordered_map<int, list<pair<int, int> > > adj;

    void map(int u, int v, int weight, bool direction) {
        adj[u].push_back({v, weight});
        if(direction == 0)
        adj[v].push_back({u, weight});
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << " -> ";
            for(auto j : i.second) {
                cout << "(" << j.first << ", " << j.second << ") ";
            }
            cout << endl;
        }
    }
};

 
int main() {
    
    // in case of matrix pass weight istead of 1;
    return 0;
}