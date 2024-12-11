#include <iostream>
using namespace std;

const int MAX_NODES = 100;
bool visited[MAX_NODES];
int adjMatrix[MAX_NODES][MAX_NODES];

void DFS(int node, int totalNodes) {
visited[node] = true;
cout << node << " ";
for (int i = 0; i < totalNodes; i++) {
if (adjMatrix[node][i] == 1 && !visited[i]) {
DFS(i, totalNodes);
}
}
}

int main() {
int totalNodes, totalEdges;
cin >> totalNodes >> totalEdges;

for (int i = 0; i < totalNodes; i++) {
for (int j = 0; j < totalNodes; j++) {
adjMatrix[i][j] = 0;
}
visited[i] = false;
}

for (int i = 0; i < totalEdges; i++) {
int u, v;
cin >> u >> v;
adjMatrix[u][v] = 1;
adjMatrix[v][u] = 1;
}

DFS(0, totalNodes);

return 0;
}

