#include<iostream>
using namespace std;
int minimum(int x,int y){
if (x<y){
    return x;
}
else {
    return y;
}
}

int main()
{

    int A,B,teams;
    cout<<"Enter  your Batsman number : "<<endl;
    cin>>A;
    cout<<"Enter your Bowler number : "<<endl;
    cin>>B;

    teams = (A+B)/4;
    int min = minimum(A,B);

    if (min<teams){
        teams = min;
    }

    cout<<"Total teams : "<<teams;






return 0;
}

