#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
  public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
      this->data=d;
      this->left=NULL;
      this->right=NULL;
    }
};

node *BSTinsert(node *root, int d)
{
   if(root==NULL){
    node *nn = new node(d);
    return nn;
   }

   if(d<=root->data)
     root->left =BSTinsert(root->left, d);
   else
     root->right =BSTinsert(root->right, d);  

   return root;   
}

void levelOrder(node *root, vector<vector<int>>&ans)
{
   if(root==NULL)
   return ;
   queue<node *>q;

   q.push(root);
   while(!q.empty())
   {
     int size =q.size();
     vector<int>temp;
     for(int i=0; i<size; i++)
     {
       node *ptr =q.front();
       q.pop();

       temp.push_back(ptr->data);

       if(ptr->left)
        q.push(ptr->left);
       if(ptr->right)
        q.push(ptr->right); 
     }
     ans.push_back(temp);
     temp.clear();
   }
}

int main()
{
   int arr[7]={10,5,8,3,6,9,1};

   node *root=NULL;
   for(int i=0; i<7; i++)
   {
     root = BSTinsert(root, arr[i]);
   }
   
   vector<vector<int>>ans;
   levelOrder(root, ans);
   
   for(int i=0; i<ans.size(); i++)
   {
     for(int j=0; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
     }
     cout<<endl;
   }
}