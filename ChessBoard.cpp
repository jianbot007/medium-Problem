#include<iostream>
using namespace std;

void initialize2DArray(int **arr,int Row,int Col,int v)
{
    for(int i=0; i<Row; i++)
    {
        arr[i] = new int [Col];
    }

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            arr[i][j] = v;
        }
    }
}
void userInput2DArray(int **arr,int Row,int Col)
{
    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void print2DArray(int **arr,int Row,int Col)
{
    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
int **arr = new int*[8];
initialize2DArray(arr,8,8,0);

int sum =1;

for(int r=0;r<8;r++){
    for(int c=0;c<8;c++){
        arr[r][c] = sum;
        sum++;
    }

}
int x,y;
cout<<"Enter your Row and column"<<endl;
cin>>x>>y;

cout<<"------------------------Chess Board------------------------- "<<endl;
for(int r=0;r<8;r++){
    for(int c=0;c<8;c++){
   if( r==x || c == y || (x+y==r+c) || ( y-x == c-r) ){
    arr[r][c] = 1;
   }
   else{arr[r][c] = 0;}
}

}
arr[x][y] = 8;




print2DArray(arr,8,8);
}
