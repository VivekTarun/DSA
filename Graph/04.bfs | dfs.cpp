#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph {
public: 
  unordered_map<int, list<int> > adjList;

  void addEdge(int u, int v, int directtion) {
    //direction = 0 -> directed graph
    // direction = 1 ->  un-directed graph

    adjList[u].push_back(v);

    if(directtion == 0)
    adjList[v].push_back(u);
  }

  void printAdjList() {
    for(auto node: adjList) {
      cout << node.first << "-> ";
      for(auto neighbour: node.second) {
        cout << neighbour << ", ";
      } cout << endl;
    }
  }

  void bfs(int src, unordered_map<int, bool>& visited) {
    queue<int> q;
    unordered_map<int, bool> visited;

    q.push(src);
    visited[src] = true;

    while(!q.empty()) {
        int frontNode = q.front();
        q.pop();
        cout << frontNode << ", ";

        //insert neighbours
        for(auto neighbour: adjList[frontNode]) {
            if(!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
  }

  void dfs(int src, unordered_map<int, bool>& visited2) {
    cout << src << ", ";
    visited2[src] = true;

    for(auto neighbour : adjList[src]) {
        if(!visited2[neighbour]) {
            dfs(neighbour, visited2);
        }
    }
  }
};

int main() {

  graph g;
  int n = 5; //number of nodes

  g.addEdge(0,1,0);
  g.addEdge(1,3,0);
  g.addEdge(0,2,0);
  g.addEdge(2,4,0);


  unordered_map<int, bool> visited;
  cout << "Printing BFS traversal: " << endl;
  for(int i = 0; i<n; i++) {
    if(!visited[i]) {
        g.bfs(i, visited);
    }
  }




  cout << endl << "printing DFS traversal: " << endl;
  unordered_map<int, bool> visited2;
  for(int i = 0; i<n; i++) {
    if(!visited2[i]) {
        g.bfs(i, visited2);
    }
  }
  






    
  // int n;
  // cout << "Enter the number of nodes: " << endl;
  // cin >> n;

  // int e;
  // cout << "Enter the number of edges: " << endl;
  // cin >> e;

  // graph g;

  // for(int i = 0; i<e; i++) {
  //   int u, v;
  //   cin >> u >> v;
  //   g.addEdge(u,v,0);
  // }
  // g.printAdjList();

  // //undirected graph
  return 0;
}