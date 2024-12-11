#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
    int vertex=1000;
    ofstream fout("1k.txt");
    cout<<vertex<<" "<<endl;
    int edge=0;
    double r;
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
                r=(((rand()%100)+1)/100.0);
            if(i!=j&&(((rand()%100)+1)/100.0)>0.7){
                cout<<i<<" "<<j<<endl;
                edge++;
            }


        }
    }

    fout<<edge;
    return 0;
}
