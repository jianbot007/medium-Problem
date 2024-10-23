#include<iostream>
using namespace std;
#include<vector>
#include<queue>

vector<int> BFS(int V,vector <int> adjlist[])
{
    int visited[V]= {0};
    vector <int> BFS;
    queue<int> q;
    visited[0]=1;
    q.push(0);

    while(!q.empty())
    {
        int Node = q.front();
        q.pop();
        BFS.push_back(Node);


        for (auto n : adjlist[Node])
        {
            if (!visited[n])
            {
                visited[n]=1;

                q.push(n);
            }

        }
    }

    return BFS;

}

int main()
{
    int V = 5;
    vector<int> adjlist[5] = {{1, 3}, {0, 2, 3}, {1, 3}, {0, 1, 2, 4}, {3}};

    vector<int> result = BFS(V, adjlist);

    cout << "BFS result: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;


}
