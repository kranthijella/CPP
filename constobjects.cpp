#include<iostream>
using namespace std;

class sample
{


int i;

public:
sample(int x)
{

 i = x;


}

int getvalue() const
{

int y= 10+i;
return y;



}


};


int main()
{

const sample s(50);
cout<<s.getvalue();


}



