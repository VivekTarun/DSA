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

  bool detectCycleBfs(int src, unordered_map<int, bool>& visited3) {

    queue<int> q;
    unordered_map<int, int> parent;

    q.push(src);
    visited3[src] = true;
    parent[src] = -1;

    while(!q.empty()) {
      int frontNode = q.front();
      q.pop();

      for(auto nbr: adjList[frontNode]) {
        if(!visited3[nbr]) {
          q.push(nbr);
          visited3[nbr] = true;
          parent[nbr] = frontNode;
        } 
        if(visited3[nbr] && nbr != parent[frontNode]) {
            return true;
        }
      } 
    }
    return false;
  }

  bool detectCycleDfs(int src, unordered_map<int, bool>& visited4, int parent) {
    visited4[src] = true;

    for(auto nbr: adjList[src]) {
        if(!visited4[nbr]) {
            bool checkAageKaAns = detectCycleDfs(nbr, visited4, src); // yaha parent src hoga
            if(checkAageKaAns) {
                return true;
            }
        }
        if(visited4[nbr] && nbr != parent) {
            //cycle present
            return true;
        }
    }
    return false;
  }

  bool detectCyclicInDirected(int src, unordered_map<int, bool>& visited, unordered_map<int, bool> dfsVisited) {
    visited[src] = true;
    dfsVisited[src] = true;

    for(auto nbr: adjList[src]) {
        if(!visited[nbr]) {
            bool aageKaAnswer = detectCyclicInDirected(nbr, visited, dfsVisited);
            if(aageKaAnswer)
            return true;
        }
        if(visited[nbr] == true && dfsVisited[nbr] == true) {
            return true;
        }
    }
    dfsVisited[src] = false; // wapis se false mark kar rha hain
    return false;
  }
};

int main() {

  graph g;
  int n = 4; //number of nodes

  g.addEdge(0,1,1);
  g.addEdge(1,2,1);
  g.addEdge(2,3,1);
  g.addEdge(3,4,1);
  g.addEdge(4,0,1);

  bool ans = false;
  unordered_map<int, bool> visited;
  unordered_map<int, bool> dfsVisited;
  for(int i = 0; i<n; i++) {
    if(!visited[i]) {
        ans = g.detectCyclicInDirected(i, visited, dfsVisited);
        if(ans)
        break;
    }
  }
  if(ans) cout << "cycle is present" << endl;
  else cout << "cycle absent" << endl;

//   cout << "printing DFS detection: " << endl;
//   unordered_map<int, bool> visited4;
//   bool ans = false;
//   for(int i = 0; i<n; i++) {
//     if(!visited4[i]) {
//         ans = g.detectCycleDfs(i, visited4, -1);
//         if(ans) {
//             break;
//         }
//     }
//   }
//   if(ans) {
//     cout << "cycle is present" << endl;
//   } else {
//     cout << "cycle is absent" << endl;
//   }

//   cout << "printting BFS detection: " << endl;
//   unordered_map<int, bool> visited3;
//   bool ans = false;
//   for(int i = 0; i<n; i++) {
//     if(!visited3[i]) {
//       ans = g.detectCycleBfs(i, visited3);
//     }
//   }
//   if(ans) cout << "cycle is present" << endl;
//   else cout << "cycle is absent" << endl;


  // cout << "printing DFS traversal: " << endl;
  // unordered_map<int, bool> visited2;
  // for(int i = 0; i<n; i++) {
  //   if(!visited2[i]) {
  //       g.bfs(i, visited2);
  //   }
  // }

  // unordered_map<int, bool> visited;
  // cout << "Printing BFS traversal: " << endl;
  // for(int i = 0; i<n; i++) {
  //   if(!visited[i]) {
  //       g.bfs(i, visited);
  //   }
  // }

  
  






    
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