#include <bits/stdc++.h>
using namespace std;

void printGraph( vector<vector<int>>& adj) {
    for (int i = 0; i < adj.size(); i++) {
        cout << i << " --> ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j]<<" , ";

        }
        cout << endl;
    }
}

int degree(vector<vector<int>>& adj, int ver)
{
return adj[ver].size();


}

int main() {
    ifstream fin("value.txt");

    int n, m;
    fin >> n >> m;

    vector<vector<int>> adj(n);

    int u, v;
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        if (u < n && v < n) {
            adj[u].push_back(v);
            //adj[v].push_back(u);
        }
    }

    fin.close();


    printGraph(adj);


    int deg= degree(adj,3);
    cout<<"degree: "<<deg<<endl;

    return 0;
}
