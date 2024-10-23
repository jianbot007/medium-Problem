#include<iostream>
using namespace std;
#include<vector>

void initialize2DArray(int **arr,int Row,int Col,int v){
    for(int i=0;i<Row;i++){
        arr[i] = new int [Col];
    }

    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            arr[i][j] = v;
        }
    }
}
void print2dArray(int **arr,int n){
for(int i =1;i<=n;i++){
    for(int j=1;j<=n;j++){
       cout<<arr[i][j]<<", " ;

    }
    cout<<endl;
}
}


int main(){


int edge ,nodes;
edge = 6;
nodes =5;
vector<int> Graph[nodes+1];
int **adj = new int* [nodes+1];
initialize2DArray(adj,nodes+1,nodes+1,0);

cout<<"enter all the edge :"<<endl;

for(int i=1;i<=edge;i++){
int u,v;
cin>>u>>v;
Graph[u].push_back(v);
Graph[v].push_back(u);
adj[u][v]= 1;
adj[v][u]= 1;
cout << " next : "<< endl;
}
cout<<"Graph in Array : "<<endl;
print2dArray(adj,nodes);
cout<<"Graph in Adjlist : "<<endl;

    for (int i = 1; i <= nodes; ++i) {
        cout << "Vector " << i << ": ";
        for (const auto &element : Graph[i]) {
            cout << element << " ";
        }
        cout << endl;
    }





return 0;
}
