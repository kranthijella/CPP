#include<iostream>
using namespace std;

class car
{
protected:
  string name;
public:
  void get()
  {
    cout<<"enter the name"<<endl;
    cin>>name;
  }
};
class Bike
{
protected:
  string bike;
public:
  void get1()
  {
    cout<<"enter the bike name";
    cin>>bike;
  }
  void put1()
  {
    cout<<"bike";
  }
};
class Train:public car,public Bike
{
public:
  void put()
  {
    cout<<name<<bike;
    put1();
  }
};
int main()
{
  Train a;
  a.get();
  a.get1();
  a.put();
}
