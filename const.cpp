#include<iostream>
using namespace std;

class A{
  const int a = 10;
  int b;
public:
  A()
  {
    b =10;
  }
void change() const
{

cout<<b;
}
void put()
{
  cout<<a<<b;
}
 void get() const
{
  cout<<b;
}
};
int main()
{
  const A c;
  c.change();
  c.get();
}
