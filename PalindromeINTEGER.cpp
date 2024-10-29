//Write a function to determine if a given integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int number ;
    cout<<"Enter the Number"<<endl;
    cin>>number;

    string Str = to_string(number);
    int Size = Str.size();

    if ( Size % 2 == 0)
    {
        if ((Str.substr(0,((Size/2)-1))) == Str.substr((Size/2),Size-1))
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }
    }

    else{
         if ((Str.substr(0,(Size/2)) == Str.substr((Size/2),Size-1)))
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }

    }


}

