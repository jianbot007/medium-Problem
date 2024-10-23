#include<iostream>
using namespace std ;

void Check(int graph[][3],int col,int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(graph[i][j]==0)
            {
                for(int k=0; k<3; k++)
                {
                   graph[i][k]=-1;
                    graph[k][j]=-1;

                }
            }
        }
    }
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(graph[i][j]==-1)
            {
               graph[i][j]=0;
            }
        }
    }
}


int main()
{


