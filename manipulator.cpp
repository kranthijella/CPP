#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
/*cout<<setfill('.');
cout<<setw(30)<<setiosflags(ios::left)<<"Chapter 10 A streams"<<"222"<<endl;
cout<<setw(30)<<setiosflags(ios::left)<<"Chapter 10 A inheritance"<<"222"<<endl;
//few more examples
cout<<setfill('/');
cout<<setw(20)<<setiosflags(ios::right)<<"WEL"<<endl;
cout<<setfill('#');
cout<<setw(10)<<setiosflags(ios::right)<<"DONE"<<endl;
//now integers
cout<<setbase(10)<<0101<<endl;
cout<<setbase(8)<<65<<endl;
cout<<setbase(16)<<setiosflags(ios::showbase)<<1000<<endl;
cout<<setbase(10)<<0x3e8<<endl;
cout<<setfill(' ');
cout<<setfill('!');
cout<<setw(40)<<setiosflags(ios::left)<<"hello"<<setiosflags(ios::right)<<"world";
*/vector<char>d(12);
for(int i=0;i<12;i++)
{
  char c;
  cin>>c;
  d.push_back(c);

}
for(int i=0;i<d.size();i++)
{
  cout<<fill()
}
}
