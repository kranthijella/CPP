#include<iostream>
using namespace std;

class time1
{
  int hours;
  int min;
public:
  void add(time1 c);
  void get();
  void put();
};
void time1::add(time1 c)
{
  cout<<hours+c.hours;
  cout<<min+c.min;
}
void time1::get()
{
  cout<<"enter the hrs and min"<<endl;
  cin>>hours>>min;
}
void time1::put()
{
  cout<<hours<<min;
}
int main()
{
  time1 t;
  t.get();
  t.put();
  time1 f;
  f.get();
  t.add(f);
}
