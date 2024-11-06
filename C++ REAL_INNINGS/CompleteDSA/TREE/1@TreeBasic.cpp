#include<iostream>
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
  root->left = buildTree(root->right);  

  return root;

}


int main()
{
    node* root = NULL;

    root = buildTree(root);
}