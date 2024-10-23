#include<iostream>
using namespace std;




int main(){
int arr[6]={1,2,3,4,5,6};
int solvedArr[6];
int k=6;

for(int i =0;i<6;i++){

    if(i<k){
      solvedArr[6-(k-i)]=arr[i];
    }

    else if(i>=k){
        solvedArr[i-k]=arr[i];
    }

}

for(int i =0;i<6;i++){
cout<<solvedArr[i]<<",";
}
}




