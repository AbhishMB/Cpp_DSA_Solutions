#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;

    //Constructer 
    Node(int data)
    {
        this ->data = data;
        this -> next = NULL;
    }
};

void InsertArHead(Node* &head,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 0
    temp -> next = head;
    head =temp;
}

//Printing the LinkList
void Print(Node* &head)
{
    Node* temp = head;

    while(temp!= NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next; //assigning nxt node adress,stored in cureent node
    }
    cout<<endl;
}

int main()
{
    Node *node1 = new Node(10);
    //cout<<node1 ->data<<endl;
    //cout<<node1 ->next<<endl;
    
    //Head pointing to node1
    Node* head = node1;

    //Inserting the Element
    InsertArHead(head,12);
    InsertArHead(head,20);
    InsertArHead(head,25);
    //printing
    Print(head);


    return 0;
}