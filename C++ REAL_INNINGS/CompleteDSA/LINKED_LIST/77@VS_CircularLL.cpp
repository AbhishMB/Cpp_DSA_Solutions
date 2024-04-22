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

    //deconstructer
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


//Printing the LinkList
void Print(Node* tail)
{
    Node* temp = tail;

    do
    {
        cout<<tail->data<<" ";
        tail = tail ->next;
    } while (tail!=temp);
    cout<<endl;

    
}

void insertNode(Node* &tail,int ele ,int d)
{
   //asuming that thr rlrmrnt is present in tje list 

   //Empty list
   if(tail==NULL)
   {
      Node* newnode = new Node(d);
      tail = newnode;
      newnode ->next = newnode;

   } 
   else{
    //NON empty list 
    Node* curr = tail;

    while(curr->data != ele)
    {
        curr=curr->next;
    }
   
    //element found and ele representing by current
    Node* temp = new Node(d);
    temp ->next = curr ->next;
    curr ->next =temp;
   }
}

void deleteNode(Node* &tail, int value)
{
    //empty
    if(tail==NULL)
    {
        cout<<"list is empty please checlk"<<endl;
    }
    else{
        //vaue is present in the list 
        Node* pre = tail;
        Node* curr = pre ->next;

        while(curr->data !=value )
        {
            pre=curr;
            curr = curr->next; 
        }
        
        pre ->next = curr ->next;
        //single node
        if(curr==pre)
        {
            tail=NULL;
        }
        //2 node LL
        if(tail==curr){
            tail=pre;
        }
        curr ->next =NULL;
        delete curr;
    }
}

int main()
{
    Node* tail = NULL;

    insertNode(tail,5,3);
    insertNode(tail,3,6);
    insertNode(tail,6,9);
    insertNode(tail,9,12);
    insertNode(tail,12,15);

    //print
    Print(tail);

    //delete
    deleteNode(tail,3 );

    //print
    Print(tail);
    
    return 0;

}    