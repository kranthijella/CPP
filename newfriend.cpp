#include<iostream>
using namespace std;
class B;
class A
{
  int a,b;
public:

  void put(B r );
};
class B
{
int c,d;
public:
  void get()
  {
    cout<<"Enter the c,d"<<endl;
    cin>>c>>d;
  }
  friend void A::put(B r);
};
void A::put(B r)
{
  cout<<r.c<<r.d;

}
int main()
{
  A a;
  B d;
  d.get();
  a.put(d);
}
