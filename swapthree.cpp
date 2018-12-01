#include<iostream>
using namespace std;
void swap(int a,int b);
void swap1(int &a,int &b);
void swap2(int *a,int *b);
int main()
{
int a=10;
int b = 20;
cout<<"before the swap"<<endl;
cout<<a<<b<<endl;;
swap(a,b);
  cout<<"after the swap"<<endl;
  cout<<a<<b<<endl;
swap1(a,b);
cout<<"after the swapq"<<endl;
cout<<a<<b<<endl;
swap2(&a,&b);
cout<<a<<b<<endl;

}
void swap(int a,int b) {
  int temp ;
  temp = a;
  a = b;
  b= temp;
  /* code */
}
void swap1(int &a,int &b)
{
  int t;
  t= a;
  a=b;
  b= t;
}
void swap2(int *a,int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
