#include<iostream>
using namespace std;


class arguments
{

int a;
int b;
public:

arguments()
{

	a = 10;
	b = 20;



}

~arguments()
{
	cout<<"destructed";

}
void display()
{



	cout<<a<<endl;
	cout<<b<<endl;

}
};


class defaul
{


	int c,d;
	public:
	defaul()
	{
		c = 12;
		d = 13;


	}
	~defaul()
	{

		cout<<"hello des";	
	}
	void display()
	{



	cout<<c<<endl;
	cout<<d<<endl;

	}




};



int main()
{


arguments s;
defaul t;

s.display();
t.display();
cout<<"main";


}

