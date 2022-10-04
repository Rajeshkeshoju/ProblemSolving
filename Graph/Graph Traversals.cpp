#include <iostream>
#include <vector>
#include <queue>

using namespace std;


/***
 * Depth-First Search
 * Using Stack
***/

void dfsTraverser(vector<vector<int>> graph, vector<int>& visited, int vertex) {
    if(visited[vertex]) {
        return;
    }
    
    visited[vertex] = 1;
    cout << vertex << " ";
    
    for(int adjacentVertex=0; adjacentVertex<graph.size(); adjacentVertex++) {
        
        if(!graph[vertex][adjacentVertex]) {
            continue;
        }
        
        dfsTraverser(graph, visited, adjacentVertex);
    }
}

void dfs(vector<vector<int>>& graph) {
    int v = graph.size();
    
    vector<int> visited(v, 0);
    
    dfsTraverser(graph, visited, 0);
    cout << endl;
}


/***
 * Breadth-First Search
 * Using Queue
***/

void bfsTraverser(vector<vector<int>>& graph, vector<int>& visited, int sourceVertex) {
    queue<int> q;
    
    visited[sourceVertex] = 1;
    q.push(sourceVertex);
    
    while(!q.empty()) {
        int vertex = q.front();
        
        cout << vertex << " ";
        
        q.pop();
        
        for(int v=0; v<graph.size(); v++) {
            if(!visited[v]) {
                visited[v] = 1;
                
                q.push(v);
            }
        }
    }
}

void bfs(vector<vector<int>>& graph) {
    int v = graph.size();
    
    vector<int> visited(v, 0);
    
    bfsTraverser(graph, visited, 0);
    cout << endl;
}

int main()
{
    int v = 5;
    vector<vector<int>> graph = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 1},
        {1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };
    
    cout << "DFS: ";
    dfs(graph);
    
    cout << "BFS: ";
    bfs(graph);

    return 0;
}
