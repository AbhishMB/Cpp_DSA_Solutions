#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //prop
    public :
       int *arr;
       int top;
       int size;

    //behaviour
    Stack(int size){
        this->size =size;
        arr = new int[size];
        top=-1;
    }   


};

int main()
{
    
    return 0;
}
