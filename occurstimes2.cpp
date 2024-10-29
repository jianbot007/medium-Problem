#include<iostream>
using namespace std;


bool check1DarrayForValue(int arr[],int s,int v){
for(int i=0;i<s;i++){
if (arr[i]==v){return true;}}
return false;
}

int main(){
int j=0;
int arr[10]={4,6,1,6,9,6,1,9,5,8};
int arr1[10];

for(int i=0;i<10;i++){
if(!check1DarrayForValue(arr1,10,arr[i])){
   arr1[j]=arr[i];
   j++;
        }
}

for (int i = 0;i<j;i++){
        int z=0;
for(int j=0;j<10;j++){
if(arr1[i]==arr[j]){
z++;
}
}
cout<<arr1[i]<<" has "<<z<<" times."<<endl;
}
}
