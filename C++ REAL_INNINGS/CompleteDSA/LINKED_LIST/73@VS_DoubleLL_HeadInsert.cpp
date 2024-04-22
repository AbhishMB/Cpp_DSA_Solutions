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
        this ->pre = NULL;
        this -> next = NULL;
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

void GetLength(Node* head)
{
  int len=1;
  Node* temp = head;

  while(temp->next !=NULL)
  {
    len++;
    temp=temp->next;
  }
  cout<<"Length of the LL is "<<len<<endl;
}

int main()
{
    Node *node1 = new Node(10);
    //cout<<node1 ->data<<endl;
    //cout<<node1 ->next<<endl;
    
    //Head pointing to node1
    Node* head = node1;

    //Inserting the Element
    InsertAtHead(head,12);
    InsertAtHead(head,20);
    InsertAtHead(head,25);
    
    //printing
    Print(head);

    //length of the LL
    GetLength(head);


    return 0;
}