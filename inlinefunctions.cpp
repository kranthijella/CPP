#include<iostream>
using namespace std;

void add(int a,int b);

int main()
{
int a,b;
  
cout<<"enter the values a and b";
cin>>a;
cin>>b;
 
add(a,b);

}


inline void add(int a,int b)
{
	int c;
	c= a+b;
	cout<<c;


}
