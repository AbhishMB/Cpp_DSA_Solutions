#include <iostream>
#include <vector>
using namespace std;





int main()
{
  vector<int> arr;
  cout << "Enter the number(integer)" << endl;
  int n;
  cin >> n;
  int num;
  int rev_binary = 0;
  int i = 0;
  while (n > 0)
  {
    i++;
    num = n % 2;
    n = n / 2;
    // rev_binary=rev_binary*10+num;
    //
    arr.resize(i);

    arr[i - 1] = num;
  }
  int count=0;
  int count1=0;
  for (int j = arr.size()-1; j>=0; j--)
  {
   // cout << "the binary number is:" << endl;
    cout << arr[j];
    if (arr[j]==1) count++;
    else count1++;
  }
  
  cout<<endl<<"No of one bits in the binary representation:"<<count<<endl;
  cout<<"No of zero bits in the binary representation:"<<count1<<endl;
  
  // int k, binary=0;

  // while(rev_binary>0){
  // k=rev_binary%10;
  // rev_binary=rev_binary/10;

  /// binary=binary*10+k;
  //}

  // cout<<binary<<endl;
  return 0;
}
