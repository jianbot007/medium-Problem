#include<iostream>
using namespace std;

const int SIZE = 7;
int Q[SIZE];
int front = -1;
int rear = -1;

bool isEmpty(){
    return (front == -1 && rear == -1);
}

bool isFull(){
    return (rear == SIZE - 1);
}

bool enqueue(int element){
    if (isFull()){
        cout << "Queue is full";
        return false;
    } else if (isEmpty()){
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    Q[rear] = element;
    return true;
}

bool dequeue(){
    if (isEmpty()){
        cout << "Queue is empty";
        return false;
    } else if (front == rear){
        front = -1;
        rear= -1;
    } else {
        front++;
    }
    return true;
}

int getFront(){
    if (isEmpty()){
        cout << "Queue is Empty";
        return -1;
    } else {
        return Q[front];
    }
}

void print(){
    if (isEmpty()){
        cout << "Queue is Empty";
    } else {
        cout<<"Linear Queue : "<<endl;
        for(int i=front; i<=rear ;i++){
            cout << Q[i] << endl;
        }
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    enqueue(70);
    print();
    return 0;
}
