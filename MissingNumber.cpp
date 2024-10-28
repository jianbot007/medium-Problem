//Given an array containing n distinct numbers taken from the range 0 to n, find the one number missing from the array.

#include<iostream>
using namespace std;

void PrintArray(int Array[],int size){
 for(int i=0;i<size;i++){
        if(i<size-1){
        cout<<Array[i]<<",";
    }
 else{
    cout<<Array[i]<<endl;
 }
}
}
int Find_MissingValue(int Array[],int size){
int Missing_element = 0;
for(int i =0; i< size ; i++){
    if(Array[i] == Missing_element){
        Missing_element++;
        i=-1;
    }
}
return Missing_element;

}

int main(){
    int size;
    cout <<"Enter the Size of the array"<<endl;
    cin>>size;
    int Array[size];
    for(int i=0;i<size;i++){
        cin>>Array[i];
    }
    PrintArray(Array,size);

    cout<<"Missing Value :"  <<Find_MissingValue(Array,size);

}
