//PASCAL TRIANGLE(MINE)
#include <iostream>
using namespace std;

void PASCAL(int a[25][25], int n)
{
  int i = 0, j = 0;
  a[0][0] = 1;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (j == 0)
      {
        a[i][j] = 1;
      }
      else
      {
        a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
      }
    }

    a[i][j] = 1;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}
int main()
{
  int a[25][25], n;
  cout << "enter number of rows in pascal T :";
  cin >> n;

  PASCAL(a, n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}

// pascal triangle using vector

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> PASCAL_T(int n)
{
  vector<vector<int>> pascal(n);

  for (int i = 0; i < n; i++)
  {

    pascal[i].resize(i + 1);

    for (int j = 0; j < i + 1; j++)
    {
      if (j == 0 || j == i)
      {
        pascal[i][j] = 1;
      }
      else
      {
        pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
      }
    }
  }
  return pascal;
}

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> ans;
  ans = PASCAL_T(n);

  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}



// PARTICULAR PASCAL

#include<iostream>
using namespace std;

 int FACTORIAL(int f)
 {
  int fact_f;
  while(f>0)
  {
    fact_f*=f;
    f--;
  }
  return fact_f;
 }

int main()
{
  int i,j,r,ans;
  cout<<"Enter the row and colomn of the pascal triangle :\n";
  cin>>i>>j;

  i=i-1;
  j=j-1;

  i=FACTORIAL(i);
  j=FACTORIAL(j);
  r=i-j;
  r=FACTORIAL(r);
   
   ans=i/(j*r);
   

   cout<<ans;
   

   return 0;

}


//PRACTICE
#include<iostream>
using namespace std;
int main()
{
  int a=4;
  cout<<a;
  return 0;
}