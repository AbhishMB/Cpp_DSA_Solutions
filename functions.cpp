#include <iostream>
using namespace std;

void arrayprinting(int a[], int &x){
    for (int i=0;i<x;i++){
    cout << a[i]<<" ";
    }
};

int main() {
    // Your code here
 int arr[5]={3,5};
 int s=sizeof(arr)/sizeof(int);
 cout << s<<endl;
 arrayprinting(arr,s);

    return 0;
}
