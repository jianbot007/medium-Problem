#include<iostream>
using namespace std;

int main()
{

    int arr1[12]= {1,2,2,3,3,3,3,6,1,5,3,2};

    int uniqueArr[12];

    int f=0;

    int SolvedArray[12];

    int z=0;

    for(int i=0; i<12; i++)
    {
        int c=0;
        for(int j=0; j<12; j++)
        {
            if(arr1[i]==uniqueArr[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            uniqueArr[f] = arr1[i];
            f++;
        }


    }


    for(int i=0; i<f; i++)
    {
        int count = 0;
        for(int j=0; j<12; j++)
        {
            if(uniqueArr[i]==arr1[j])
                count++;

        }

        if(count>=2)
        {
            SolvedArray[z]=uniqueArr[i];
            SolvedArray[z+1]=uniqueArr[i];
            z=z+2;
        }
        if(count<2)
        {
            SolvedArray[z]=uniqueArr[i];
            z++;

        }
    }


    for(int i=0; i<12; i++)
    {
        cout<<arr1[i]<<",";
    }

    cout<<endl;

    for(int i=0; i<z; i++)
    {
        cout<<SolvedArray[i]<<",";

    }
}


