#include<iostream>
using namespace std;
#include<vector>
int main()
/*{
 int array[]={1,2,3,4,5,6};

 for(int i=1;i<6;i++){
 if(array[i]<array[i-1]){
  cout<<"not sorted"<<endl;
 }
 else{
  cout<<"sorted"<<endl;
 }
 }
 return 0;
}*/
{
 int array[]={1,2,3,4,5,6};
  bool sortedflag=true;
 for(int i=1;i<6;i++){
 if(array[i]<array[i-1]){
  sortedflag=false;
 }
 }
 cout<<sortedflag<<endl;
 return 0;
}
