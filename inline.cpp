#include<iostream>
using namespace std;
int add(int a,int b);
int main()
{
  int a;
  int b;
  a=10;
  b= 85;
int d=  add(a,b);
  cout<<d;
}
inline int add(int a,int b)
{
  return (a+b);
}
