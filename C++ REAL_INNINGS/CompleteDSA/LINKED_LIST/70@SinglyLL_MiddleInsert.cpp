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

void InsertAtTail(Node* &tail,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 0
    tail -> next = temp;
    tail =temp;
}

void InsertArHead(Node* &head,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 0
    temp -> next = head;
    head =temp;
}

void InsertAtMiddle(Node* &head, Node* &tail, int pos,int d)
{
    if(pos==1)
    {
        InsertArHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
       temp=temp->next;
       cnt++;
    }

    if(temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next =temp->next;
    temp->next =nodeToInsert;
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
    
    //Tail pointing to node1
    Node* tail = node1;
    Node *head = node1; 

    //Inserting the Element
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);

    //insert at middle
    InsertAtMiddle(head,tail,4,333);

    //printing
    Print(head);


    return 0;

}    