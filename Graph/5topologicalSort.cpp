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

  void topoSortDfs(int src, unordered_map<int, bool>& visited, stack<int>& ans) {
    visited[src] = true;

    for(auto neighbour : adjList[src]) {
        if(!visited[neighbour]) {
            topoSortDfs(neighbour, visited, ans);
        }
    }
    //while returning store the node in stack
    ans.push(src);
  } 

  void topoSortBfs(int n, vector<int>& ans) {
    queue<int> q;
    unordered_map<int, int> indegree;

    //indegree calculate
    for(auto i: adjList) {
        int srx = i.first;
        for(auto nbr: i.second) {
            indegree[nbr]++;
        }
    }

    //put all nodes inside queue, which has indegree = 0;
    for(int i = 0; i<n; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int fNode = q.front();
        q.pop();

        ans.push_back(fNode);

        for(auto nbr : adjList[fNode]) {
            indegree[nbr]--;
            //check for zero again
            if(indegree[nbr] == 0) {
                q.push(nbr);
            }
        }
    }
  }

};

int main() {

  graph g;
  int n = 8; //number of nodes

  g.addEdge(2,4,1);
  g.addEdge(2,5,1);
  g.addEdge(4,6,1);
  g.addEdge(5,3,1);
  g.addEdge(6,7,1);
  g.addEdge(3,7,1);
  g.addEdge(7,0,1);
  g.addEdge(7,1,1);

  g.printAdjList();
  cout << endl;


    vector<int> ans;
    //connected or disconnected
     
    g.topoSortBfs(n, ans);

    cout << "Printing Topological Sort using BFS" << endl;
    for(auto i : ans) {
        cout << i << ", ";
    } cout << endl;

//   unordered_map<int, bool> visited;
//   stack<int> ans;
//   for(int i = 0; i<n; i++) {
//     if(!visited[i]) {
//         g.topoSortDfs(i, visited, ans);
//     }
//   }

//   cout << "Top sort: " << " ";
//   while(!ans.empty()) {
//     cout << ans.top() << " ";
//     ans.pop();
//   }
  return 0;
}