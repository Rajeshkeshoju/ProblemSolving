#include <iostream>
#include <vector>

using namespace std;

/***
 * 
 *  Class implementation for Graph

    class Graph {
        vector<int>* graph;
        
        public:
            Graph(int size) {
                graph = new vector<int>(size);
            }
            
            void addEdge(int sourceVertex, int destinationvertex) {
                graph[sourceVertex].emplace_back(destinationvertex);
            }
    };


***/

void dfsTraverser(vector<vector<int>> graph, vector<int>& visited, int sourceVertex) {
    if(visited[sourceVertex]) {
        return;
    }
    
    visited[sourceVertex] = 1;
    cout << sourceVertex << " ";
    
    for(int adjacentVertex=0; adjacentVertex<graph.size(); adjacentVertex++) {
        
        if(!graph[sourceVertex][adjacentVertex]) {
            continue;
        }
        
        dfsTraverser(graph, visited, adjacentVertex);
    }
}

void dfs(vector<vector<int>>& graph) {
    int v = graph.size();
    
    vector<int> visited(v, 0);
    
    dfsTraverser(graph, visited, 0);
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
    
    dfs(graph);

    return 0;
}
