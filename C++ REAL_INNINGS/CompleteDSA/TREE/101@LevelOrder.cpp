#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
      int data;
      node *left;
      node *right;

    node(int d)
    {
        this->data=d;
        this->left = NULL;
        this->right = NULL;
    }  
};

node* buildTree(node *root)
{
  int data ;
  cout<<"Enter the data "<<endl;
  cin>>data;
  root = new node(data);

  if(data == -1)
    return NULL;

  cout<<"Enter data for inserting in left of "<<root->data<<endl;
  root->left = buildTree(root->left);  
  cout<<"Enter data for inserting in right "<<root->data<<endl;
  root->right = buildTree(root->right);  

  return root;

}

void levelOrderTraversal(node *root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        if(temp == NULL){ //level complte
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
          
        else{
            cout<< temp->data <<"  ";
            if(temp->left){
               q.push(temp->left); }

            if(temp->right){
                q.push(temp->right);  } 

        }  
    }

}

void ReverseLevelOrderTraversal(node *root){
    queue<node*>q;
    stack<node*>s;
    q.push(root);
    

    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        s.push(temp);


            if(temp->left){
               q.push(temp->left); }

            if(temp->right){
                q.push(temp->right);  } 
 
    }
    while(!s.empty()){
        node *temp =s.top();
        cout<<temp->data<<" ";
        s.pop();
    }

}

int main()
{
    node* root=NULL;

    root = buildTree(root);

    cout<<"printing the level order traversal"<<endl;
    levelOrderTraversal(root);

    cout<<"printing the Revsre level order traversal"<<endl;
    ReverseLevelOrderTraversal(root);

}