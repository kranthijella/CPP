#include<iostream>
using namespace std;
template<class T>
T fun(T x,T y);
int main()
{
  int x = 1;
  int n = 3;
  int c = fun(1,3);
  cout<<c;

}
template<class T>
T fun(T x,T n)
{
  int sum =1;
  for(int i=1;i<=n;i++)
  {
    sum = sum+i*x;

  }
  for(int i=1;i<n;i++)
  {
    cout<<i<<"c"<<"+";
  }
  return sum;

}
