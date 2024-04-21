#include<iostream>
#include<math.h>
#include<vector>
using namespace std;




int bitwiseComplement(int n)
{
    vector<int> arr;
    int i = 0;
    int num;
    while (n !=0)
    {
        i++;
        num = n % 2;
        n = n / 2;
        arr.resize(i);
        if (num == 0)
            arr[i - 1] = 1;
        else
            arr[i - 1] = 0;
    }
    int n1 = 0;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        n1 = n1 + arr[i] * pow(2, i);
    }
    for(int i=arr.size()-1;i>=0;i--){
      cout<<arr[i];
    }
    return n1;
}


int main(){
    int m;
    cout<<"Enter the number whose complement to be found:"<<endl;
    cin>>m;
  int k=bitwiseComplement(m);
    cout<<endl<<k<<endl;



  return 0;
}
