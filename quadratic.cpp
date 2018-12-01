#include<iostream>
#include<math.h>
using namespace std;

int  main()
{
    float a,b,c,r1,r2;
    cout<<"enter the values of a , b, c"<<endl;
    cin>>a>>b>>c;
    int d = b*b-4*a*c;
    if(d>0)
    {
      r1 = (-b+sqrt((d)))/(2*a);
      cout<<r1<<endl;
      r2 = (-b-sqrt((d)))/(2*a);
      cout<<r2;
    }
    if(d==0)
    {
      r1=r2=-b/(2*a);
      cout<<r1;
      cout<<r2;
    }
    if(d<0)
    {
     float real = -b/(2*a);
      float img = (sqrt((-d)))/(2*a);
    cout<<real<<"+"<<"i"<<img<<endl;
      cout<<real<<"-"<<"i"<<img<<endl;
    }

}
