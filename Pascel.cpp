#include<iostream>
using namespace std;
#include<vector>


vector <int> RoWsolution(int Row)
{
    vector <int>  Pascel_R;
    int ans =1 ;
    Pascel_R.push_back(ans);
    for(int col=1; col<Row; col++)
    {
        ans =  ans *(Row-col) ;
        ans = ans/col;
        Pascel_R.push_back(ans);

    }

    return Pascel_R;

}

vector <vector<int>> solution(int Row)
{

    vector <vector<int>> Pascel;

    for(int i=1; i<=Row; i++)
    {
        Pascel.push_back( RoWsolution(i));
    }

    return Pascel;
}

void printPascalTriangle(const vector<vector<int>>& pascalTriangle)
{
    for (const auto& row : pascalTriangle)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main()
{
    int Row = 5;


    vector<vector<int>> result = solution(Row);


    cout << "Pascal's Triangle for Row " << Row << ":\n";
    printPascalTriangle(result);
    return 1;
}
