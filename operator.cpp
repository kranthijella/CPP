#include<iostream>
using namespace std;

class marks
{

int mark;
public:
marks()
{

mark=0;
}
marks(int m)
{

mark = m;

}
void get()
{

cout<<"enter the data";
cin>>mark;
}
void operator ++()
{



++mark;

}

marks operator ++ (int )
{


marks duplicate;
duplicate = marks(*this);
mark++;
return duplicate;
}
void show()
{

cout<<mark;

}
};



int main()
{

marks t(90);
++t;
t.show();
cout<<"pre";
(t++).show();

t.show();


}

