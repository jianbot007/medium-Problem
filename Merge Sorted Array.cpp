#include<iostream>
using namespace std;



int main(){
    int count = 0;

int arr1[5]={2,3,4,3,4};

for(int i =0;i<5;i++){
 if(arr1[i] == 2){
        arr1[i]=arr1[i+1];
 count++;

 }
}
for(int i =0;i<5-count;i++){
cout<<arr1[i]<<",";
}
}
