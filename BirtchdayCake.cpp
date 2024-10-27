/*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age.
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.*/
#include<iostream>
using namespace std;

void PrintArray(int Array[],int Size)
{
    for(int i=0; i<Size; i++)
    {
        if(i!=Size-1)
        {
            cout<<Array[i]<<",";
        }
        else
        {
            cout<<Array[i];
        }
    }

}
int MaxNumber(int Array[],int Size)
{
    int Max=0;

 for(int i=0; i<Size; i++)
    {
        if(Max < Array[i]){
            Max = Array[i];
        }


return Max;
}
}

int Count_MaxNum(int Array[],int Size){
int count = 0;
int Max = MaxNumber(Array,Size);
for(int i=0; i<Size; i++)
    {
        if(Array[i]== Max){
          count++;
        }
}
return count;
}

int main()
{
    int S;
    cout<<"Enter size of the error"<<endl;
    cin>>S;

    int Array[S] = {};

    cout<<"Enter all the element"<<endl;
    for(int i=0; i<S; i++)
    {
        cin>>Array[i];
    }

 //   PrintArray(Array,S);
 //   cout<<MaxNumber(Array,S);
 cout<<Count_MaxNum(Array,S);

}
