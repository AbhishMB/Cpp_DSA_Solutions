#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* next;
    Node* pre;

    //Constructer 
    Node(int data)
    {
        this ->data = data;
        this -> next = NULL;
        this -> pre = NULL;
    }
};

void InsertAtHead(Node* &head,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 0
    temp -> next = head;
    head->pre=temp;
    head =temp;
}

void InsertAtTail(Node* &tail,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 1
    tail ->next = temp;
    temp ->pre =  tail;
    tail =temp;
}

void InsertAtMiddle(Node* &head, Node* &tail,int d, int pos )
{
    if(pos==1)
    {
        InsertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int cnt=1;

    while(cnt<pos-1)
    {
        temp= temp->next;
        cnt++;
    }

    if(temp->next ==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }

    Node* insertNode = new Node(d);
    insertNode ->pre =temp;
    insertNode ->next = temp->next;
    temp ->next = insertNode;
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
    Node *head =tail; 

    //Inserting the Element
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtTail(tail,55);
    InsertAtTail(tail,65);

    //Inssert at middle
    InsertAtMiddle(head,tail,222,1);
    InsertAtMiddle(head,tail,333,7);
    InsertAtMiddle(head,tail,420,2);

    //printing
    Print(head);


    return 0;

}    