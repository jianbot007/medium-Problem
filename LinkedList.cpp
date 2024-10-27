#include<iostream>
using namespace std;
class LinkedList{
public :
class Node
{
public:
    int data;
    Node* next;


    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* curr = NULL;

Node* createNode(int data)
{
    return new Node(data);
}



void insertAtFirst(int data)
{

    Node* newNode = createNode(data);

    if(head == NULL)
    {
        head = newNode;
        curr = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtLast(int data)
{
    if(head == NULL)
    {
        insertAtFirst(data);
    }
    else
    {
        curr->next = createNode(data);
        curr = curr->next;
    }
}

void insertNelements(int n)
{
    int val;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the value of node "<<i+1<<": ";
        cin>>val;
        insertAtLast(val);
    }
}

void insertBefore(int value, int p)
{
    Node* temp = head;
    Node* prev = NULL;

    if(head != NULL)
    {
        while(temp != NULL && temp->data != p)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp != NULL)
        {
            Node* newNode = createNode(value);
            if(prev == NULL)
            {
                newNode->next = head;
                head = newNode;
            }
            else
            {
                prev->next = newNode;
                newNode->next = temp;
            }
        }
    }
}


void insertAfter(int after, int data)
{
    Node* temp = head;

    while(temp != NULL && temp->data != after)
    {
        temp = temp->next;
    }

    if(temp != NULL)
    {
        Node* newNode = createNode(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        cout << "Error: " << after << " not found in the linked list" << endl;
    }
}

void deleteFirst()
{
    if(head != NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteLast()
{
    if(head != NULL)
    {
        if(head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node* temp = head;
            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
            curr = temp;
        }
    }
}

void deleteData(int p)
{
    if(head != NULL)
    {
        if(head->data == p)
        {
            deleteFirst();
        }
        else
        {
            Node* temp = head;
            while(temp->next != NULL && temp->next->data != p)
            {
                temp = temp->next;
            }
            if(temp->next != NULL)
            {
                Node* nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                if(nodeToDelete == curr)
                {
                    curr = temp;
                }
                delete nodeToDelete;
            }
        }
    }
}
void display()
{
    Node* temp = head;
    while( temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
};


int main()
{
    LinkedList A;
    A.insertNelements(5);
    A.insertAtFirst(1);
    A.insertAtFirst(2);
    A.insertAtLast(3);
    A.insertAtLast(100);
    A.insertAfter(3,4);
    A.insertBefore(4, 5);
    A.deleteData(2);
    A.deleteFirst();
    A.deleteLast();
    A.display();


    return 0;
}
