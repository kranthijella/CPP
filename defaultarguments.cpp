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

void display()
{



	cout<<a<<ends<<b;

}
};


class defaul
{


	int c,d;
	public:
	void display()
	{



	cout<<c<<ends<<d;

	}




};



int main()
{


arguments s;
defaul t;

s.display();
t.display();



}

