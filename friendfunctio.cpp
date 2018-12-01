#include<iostream>
using namespace std;

class A
{
  int a;
public:
  A()
  {
    a = 10;
  }
  friend void B( A b);
};
void B(A b)
{
  cout<<b.a;
}
int main()
{
  A a;
  B(a);
}
