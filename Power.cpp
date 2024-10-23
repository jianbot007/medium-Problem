
#include <iostream>
using namespace std;

 double myPow(double x, int n) {
       double Store=1;

        if(n== INT_MAX ){

            return 1.00;

       } if(n== INT_MIN ){

            return 0.00;

       }
       if (n>=0){
        for(int i=0;i<n;i++){
        Store = Store * x;
   }
   return Store;
       }

       else{
        n = abs (n);
        for(int i=0;i<n;i++){
        Store = Store * x;
       }
       return 1/Store;
       }



    }

int main(){

cout<<myPow(0.0001,2147483648);

}
