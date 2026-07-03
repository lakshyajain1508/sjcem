#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited) {
    // Mark the current node as visited
    visited[node] = true;

    // Print the current node
    cout << node << " ";

    // Visit all adjacent nodes
    for (int neighbour : graph[node]) {
        if (!visited[neighbour]) {
            dfs(graph, neighbour, visited);
        }
    }
}

int main() {
    int vertices = 6;

    // Creating graph
    vector<vector<int>> graph(vertices);

    // Adding edges
    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 5};
    graph[3] = {1};
    graph[4] = {1};
    graph[5] = {2};

    vector<bool> visited(vertices, false);

    cout << "DFS Traversal: ";
    dfs(graph, 0, visited);   // Start DFS from vertex 0

    return 0;
}

// Output
// DFS Traversal: 0 1 3 4 2 5 
