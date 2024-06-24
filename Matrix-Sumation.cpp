#include<bits/stdc++.h>
using namespace std;

void printM(int **p,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int **create(int row,int column){

    int **m=new int*[row];
    for(int i=0;i<row;i++){
        m[i]=new int[column];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            m[i][j]=rand()%10;

        }
    }

    return m;
}

int **sumMatrix(int **a,int **b,int row,int column){
        int **c=new int*[row];
        for(int i=0;i<row;i++){
            c[i]=new int[column];
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        return c;
}




int main(){
    srand(time(0));
    int row;
    int column;

    row=4;
    column=5;
    int **m1=create(row,column);
    printM(m1,row,column);
    cout<<"\n";

    row=4;
    column=5;
    int **m2=create(row,column);
    printM(m2,row,column);
    cout<<"\n";

    row=4;
    column=5;
    int **m3=sumMatrix(m1,m2,row,column);
    printM(m3,row,column);
    cout<<"\n";



    return 0;

}
