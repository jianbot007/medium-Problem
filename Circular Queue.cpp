#include<iostream>
using namespace std;

const int size = 7;
int Q[size];
int front = -1;
int rear = -1;

bool isEmpty(){
    return (front == -1 && rear == -1);
}

bool isFull(){
    return (front == 0 && rear == size - 1) || (front == rear + 1);
}

bool enqueue(int element){
    if (isFull()){
        cout << "Circular Queue is Full";
        return false;
    } else if (isEmpty()){
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % size;
    }
    Q[rear] = element;
    return true;
}

bool dequeue(){
    if (isEmpty()){
        cout << "Circular Queue is Empty";
        return false;
    } else if (front == rear){
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % size;
    }
    return true;
}

int getFront(){
    if (isEmpty()){
        cout << "Circular Queue is Empty";
        return -1;
    } else {
        return Q[front];
    }
}

void print(){
  if(isEmpty()){
    cout<<"Queue is Empty";

  }
  else if(front>rear){
    cout<<"Circular Queue : "<<endl;
        for(int i=front;i<size;i++){
            cout<<Q[i]<<endl;
        }
        for(int j=0;j<=rear;j++){
            cout<<Q[j] <<endl;
        }
  }
 else{

    for(int i=front;i<=rear;i++){
        cout<<Q[i] <<endl;
    }

 }

}


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    print();
    return 0;
}
