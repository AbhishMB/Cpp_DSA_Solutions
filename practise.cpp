#include <iostream>
#include <vector>
using namespace std;
int f(int &v){
    cout<<v<<&v<<endl;
    return v;

}
int &func(int &i){
    return i=i+5;
}
int main() {
    cout << "Hello, world!" << std::endl;
    vector <int> n;
    n={3,4,5,7,5,1,2,4};
    
    int a[]={3,4,5,7,5,1,2,4};
    int length=sizeof(n)/sizeof(int);
    
    cout<<sizeof(n)<<":"<<sizeof(int)<<":"<<length<<endl;
    cout<<sizeof(a)/sizeof(int)<<endl;
    cout<<n.size()<<endl ;          //for vectors
    int c=10;
    int &x=c;
    cout<<x<<" "<<&x<<endl;
    cout<<c<<" "<<&c<<endl;
    int r=f(c);
    cout<<r;
    cout << "________________"<<endl;
    int t=1,o=2;
    int &z=func(t);
    cout<<t<<" "<<z<<endl;
    t++;
    int&u=func(t);
    cout<<t<<" "<<u<<endl;
    int k=4,q=3,*l;
    l=&q;
    int *pte=&k;
    *pte=*l;
    cout<<*l<<endl;
     
    return 0;
}
