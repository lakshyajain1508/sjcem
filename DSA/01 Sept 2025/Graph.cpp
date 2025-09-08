#include <iostream>
#include <queue> // for BFS queue
using namespace std;
#define N 6 // number of vertices in graph

// Adjacency matrix

int adj[N][N] = {0};

// Visited array for DFS and BFS
bool visited[N];

// ------------ Depth First Search (DFS) ------------
void DFS(int v) {
cout << v << " "; // Visit the node
visited[v] = true;

// Visit all unvisited neighbors
for (int u = 0; u < N; u++) {
if (adj[v][u] == 1 && !visited[u]) {
DFS(u);
}
}
}

// ------------ Breadth First Search (BFS) ------------
void BFS(int start) {
bool visitedBFS[N] = {false};
queue<int> q;
visitedBFS[start] = true;
q.push(start);
while (!q.empty()) {
int v = q.front();
q.pop();
cout << v << " "; // Visit the node

// Visit all unvisited neighbors

for (int u = 0; u < N; u++) {
if (adj[v][u] == 1 && !visitedBFS[u]) {
visitedBFS[u] = true;
q.push(u);
}
}
}
}

// ------------ Main Program ------------
int main() {

// The graph

// 0-1, 0-2, 1-3, 2-4, 3-5, 4-5
adj[0][1] = adj[1][0] = 1;
adj[0][2] = adj[2][0] = 1;
adj[1][3] = adj[3][1] = 1;
adj[2][4] = adj[4][2] = 1;
adj[3][5] = adj[5][3] = 1;
adj[4][5] = adj[5][4] = 1;

// Initialize visited for DFS
for (int i = 0; i < N; i++) visited[i] = false;
cout << "DFS starting from node 0: ";
DFS(0);
cout << endl;
cout << "BFS starting from node 0: ";
BFS(0);
cout << endl;
return 0;

}