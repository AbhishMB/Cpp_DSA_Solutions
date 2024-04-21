/*#include<iostream>
using namespace std;
#include<vector>
int main()
{
 vector<int>v(7);
 for(int i=0;i<7;i++){
  
 cin>>v[i];
 }
 for(int i=0;i<7;i++){
  for(int j=i+1;j<7;j++){
 if(v[i]==v[j]){
  v[i]=v[j]=-1;
 }
  }
 }

 int unique=0;
  for(int i=0;i<7;i++){
   if(v[i]>0){
    unique=v[i];
   }
  }
  cout<<unique;
 return 0;
}*/
/*{
 int array[]={1,2,3,9,3,2,1};
 int size=7;
 for(int i=0;i<size;i++){
  for(int j=i+1;j<size;j++){
 if(array[i]==array[j]){
  array[i]=array[j]=-1;
 }
  }
 }

 
  for(int i=0;i<size;i++){
   if(array[i]>0){
    cout<<array[i];
   }
  }
  
 return 0;


}*/

 #include<iostream>
using namespace std;
int main(){
    int n,v,i,j,a[50],p[1000000];
    cin>>n;
    cin>>v;
    for(i=0;i<n;i++){
        cin>>a[i];
        for(j=0;j<=a[i];j++){
        cin>>p[j];
        if(p[j]<v){
            cout<<a[i]<<" ";
        }
    }
    }
    return 0;
}

