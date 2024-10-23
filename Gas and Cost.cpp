#include<iostream>
using namespace std;



class Solve
{

public :
    int Difference(int Cost[],int Gas[],int Size)
    {
        int max = 0;
        int SP =0;
        int Dif=0;
        for(int i =0; i<Size; i++)
        {
            int Dif = Gas[i]-Cost[i];
            if(Dif>max)
            {
                max = Dif;
                SP=i;
            }
        }

        return SP;

    }


   int Solved(int Cost[],int Gas[],int Size)
    {
        int SP = Difference(Cost,Gas,Size);
        int i = 0;
        int GasR = Gas[SP];
        while(i != SP)
        {
            i = SP;
            i++;
            if(i==Size-1)
            {
                i=0;

            }

            GasR = GasR+Gas[i]-Cost[i];



        }
        return GasR;

    }

};

int main()
{

    int gas[5] = {1,2,3,4,5};
    int cost[5] = {3,4,5,1,2};


    int Size = sizeof(cost)/sizeof(cost[0]);

    Solve Test1;
    cout<<Test1.Solved(cost,gas,Size);


    return 0;
}
