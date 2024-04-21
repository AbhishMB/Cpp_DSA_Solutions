/*#include<iostream>
using namespace std;

void print(int s,int n)
{
  if(s>n)
  {
    return ;
  }

  print(++s,n);

  cout<<s<<endl;
  //s++;
 // print(++s,n);
}

int main()
{
  int n,s;
  cin>>s;
  cin>>n;

  print(s,n);
}

*/

/*#include<iostream>
using namespace std;

void fibonocci(int count,int n1,int n2,int n)
{
    if(count==n)
    {
        return ;
    }

    cout<<n1<<endl;
    //count++;
    //int nxt=n1+n2;
    fibonocci(++count,n2,n1+n2,n);


}

int main()
{
    int n;
    cin>>n;
    int n1=0,n2=1; 
    //cout<<n1<<endl<<n2<<endl;
    int count=0;
    fibonocci(count,n1,n2 ,n);

}  */

/*#include<iostream>
using namespace std;

int sum(int arr[],int n,int s)
{
  

  //base case
    if (n==0)
    {
        return 0;
    }

 sum(arr+1,n-1,s);
  s+=arr[0];


}
*/
