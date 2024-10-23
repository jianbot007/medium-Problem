#include<iostream>
using namespace std;

int main(){

int arr1[12]={1,2,2,3,3,3,3,0,1,5,3,2};
for(int i=0;i<12;i++){
    int count = 0;
    for(int j=0;j<12;j++){
            if(arr1[i]==arr1[j])
        count++;
    }
    if(count>2){
        arr1[i]=arr[i+1];
    }

}
}
