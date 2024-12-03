#include<iostream>
#include<vector>
using namespace std;


 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>  bol;

        for(int i = 0 ; i< candies.size() ; i++){
            bool check = true;
            for (int j = 0; j < candies.size() ; j++){
                 if (candies[i] + extraCandies >= candies[j] ){
                    continue;
                 }
                 else {

                    check = false;
                    break;
                 }
            }
              bol.push_back(check);
        }
  return bol;
    }


    int main(){
     vector<int> test = {2,3,5,1,3};

     kidsWithCandies(test,3);
    }
