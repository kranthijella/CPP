#include<iostream>
using namespace std;

class A
{
  int a;
public:
  A()
  {
    a = 5;
  }
friend class B;
};
class B
{
public:
  void show()
  {
    A *f = new A;
    cout<<(*f).a;

  }
};
int main()
{
  A c;
  B d;
  d.show();
}
