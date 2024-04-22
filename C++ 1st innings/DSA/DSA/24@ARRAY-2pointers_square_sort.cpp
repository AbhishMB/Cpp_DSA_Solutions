#include<iostream>
#include<vector>
using namespace std;

void SORT_SQUARE_NON_DECEN(vector<int>&v,int n)
{
  vector<int>ans;
  int s=0,e=n-1;
  while(s<=e)
  {
    if(abs(v[s])>abs(v[e]))
    {
      ans.push_back(v[s]*v[s]);
      s++;
    }
    else{
      ans.push_back(v[e]*v[e]);
      e--;
    }
  }

  cout<<"after sqaure sort :\n";
 for(int ele:ans)
 {
  cout<<ele<<" ";
 }
 
cout<<"\narray in non decending:\n";
 //reverse(ans.begin(),ans.end());
 for(int i=n-1;i>=0; i--)
 {
  cout<<ans[i]<<" ";
  
 }


}

int main()
{
    int n; 
    cout<<"enter number of element : ";
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
      int ele;
      cin>>ele;
      v.push_back(ele);
    }

 SORT_SQUARE_NON_DECEN(v,n);

 
  return 0;
}