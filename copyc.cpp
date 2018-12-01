#include<iostream>
using namespace std;
class A
{
  int a,b;
public:
 A()
  {
    a = 0;
    b = 0;
  }
void get(){
  cout<<"Enter ";
  cin>>a>>b;
}
  void put()
  {
    cout<<a<<b;
    cout<<endl;
  }
 A(A &c)
  {
    a = c.a;
    b = c.b;
  }
};
int main()
{
  A e;
  e.get();
  A f(e);
  A g = e;
  g.put();
  e.put();
  f.put();


}
