#include<iostream>
using namespace std;

class A
{
  int a,b;
public:
  A()
  {
     a = 10;
     b = 5;
  }
  void put()
  {
    cout<<a<<b;
  }
};
class B
{
  int c, d;
public:
  void put1()
  {
    cout<<c<<d;
  }
};
int main()
{
  A f;
  B g;
  f.put();
  g.put1();
}
