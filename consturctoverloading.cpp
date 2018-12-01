#include<iostream>
using namespace std;


class construct
{

double i;

public:

void display();

construct(int x)
{

i= x;
}

construct(double y)
{


i = y;


}


};

void construct::display()
{
 
 cout <<i+i;
}


int main()
{

	construct t(10);
	t.display();

	construct a(10.5);
	a.display();


}


