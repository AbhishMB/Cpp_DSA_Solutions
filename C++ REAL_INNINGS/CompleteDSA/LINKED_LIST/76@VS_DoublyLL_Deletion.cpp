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

    //Deconstructer
    ~Node()
    {
        int value = this->data;
        if(this ->next != NULL)
        {
            delete next; 
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertAtTail(Node* &tail,int d)  //why reference send? ->we dont want a copy
{
    //new node create     
    Node* temp = new Node(d); //first intialize nxt insert at 1
    tail ->next = temp;
    temp ->pre =  tail;
    tail =temp;
}

void Delete(Node* &head,Node* &tail, int pos)
{
  if(pos==1)
  {
    Node* temp=head;
    temp->next->pre =NULL;
    head = temp ->next;
    temp ->next = NULL;
    delete temp; 
    return;
  }
  Node* temp = NULL;
  Node* curr = head;
  int cnt=1;

  while(cnt<pos)
  {
    temp =curr;
    curr = curr->next;
    curr ->pre = temp;
    
    cnt++;
  }
  if(curr->next == NULL)
  {
    curr ->pre = NULL;
   temp ->next = curr->next;
   curr ->next = NULL;
   tail=temp;
   delete curr;
   return;
  }
  
  curr ->pre = NULL;
  temp ->next = curr->next;
  curr->next ->pre = temp;
  curr ->next = NULL;
  
  delete curr;
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
    return;
}

int main()
{
    Node *node1 = new Node(10);
    //cout<<node1 ->data<<endl;
    //cout<<node1 ->next<<endl;
    
    //Tail pointing to node1
    Node* tail = node1;
    Node* head =tail; 

    //Inserting the Element
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtTail(tail,55);
    InsertAtTail(tail,65);

    //printing
    Print(head);
    Print(head);

    //Deletion of node
    Delete(head,tail,5);

    //printing
    Print(head);

    cout<<"Head is :"<<head->data<<endl;
    cout<<"Tail is :"<<tail->data<<endl;
    return 0;

}    