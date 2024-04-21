#include <iostream>
using namespace std;

int ARRAYSUM(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int n, a[100];

    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "the sum of array is :";
    cout << ARRAYSUM(a, n);
    cout << endl;
}
