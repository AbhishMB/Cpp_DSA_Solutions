#include <iostream>
#include <algorithm>
class Node{
    public:
          int data;
          Node *next;

};
class Linkedlist{
    public:
       Node*head,*tail;
        Linkedlist(){    //COSTRUCTOR OF A CLASS
            head=NULL;
            tail=NULL;
        }
    void insertNodeAtFront(int value){
        Node*newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }else {
            newNode->next=head;
            head=newNode;
        }


    }
};
int main(){
    Linkedlist ist;
    ist.insertNodeAtFront(40);
    ist.insertNodeAtFront(67);
    ist.insertNodeAtFront(78);
    return 0;
}