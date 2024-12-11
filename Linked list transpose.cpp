#include<bits/stdc++.h>
using namespace std;

vector<int>* transpose()

int findDegree(vector<int> *adj, int vertex){
    return adj[vertex].size();
}
void printGraph(vector<int> *adj,int n){
    for(int i=0;i<n;i++){
        cout<<i<<"-->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<", ";
        }
        cout<<"\n";
    }
}

int main(){

    ifstream fin("dg.txt");
    int n,m;
    fin>>n>>m;

    vector<int> *adj=new vector<int>[n];
    int u,v;
    for(int i=0;i<m;i++){
        fin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    printGraph(adj,n);


    return 0;
}
