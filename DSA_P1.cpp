#include <iostream>

using namespace std;

int main() {
    // Your code here
    int n,flag=0;
    
    
    cout<<"Enter the number of boxes given: "<<endl;
    
    cin>>n;
  int arr[n];
    if (n<=0 || n>10){
        cout<<"Invalid Input\n";
        return 0;
    }else
        arr[n];

    
    for (int i=0;i<n;i++){
        cout<<"Enter the no of chocolates in box "<<i+1<<":";
        cin>>arr[i];
        if(i==0 && arr[i]%2!=0){
            cout<<"Sorry!!!The first box always should contain positive even no of chocolate\n";
            return 0;
        }
        else{
            if (arr[i]%2!=0){
                flag++;

            }
        }
    }
    cout << "No of chocolates in each box: ";
    for (int i=flag;i<n;i++){
        cout<<arr[i]<<" ";

    }
   return 0;
}
