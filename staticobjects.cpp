#include<iostream>
using namespace std;

class A
{
 int a,b;
public:
  static int c; //it must be public
  A()
  {
    a = 0;
    b =0;
    c++;
  }
  void get()
  {
    cout<<"enter"<<endl;
    cin>>a>>b;
  }
  void put()
  {
    cout<<a<<b<<c;
  }
};
int A::c = 0;
int main()
{
  A a;
  a.get();
  a.put();
  A c;
  A b;
  A d;
  d.put();
}
