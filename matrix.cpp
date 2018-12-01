#include<iostream>
using namespace std;

class matrix
{

	int **a;
	int row;
	int column;
	public:
	
	void add( matrix t1);
	void sub(matrix t2);
	void div(matrix t2);
	


	matrix(int rows,int columns)
	{	int i ,j;	
           	row=rows;
		column = columns;
		a = new int*[row];
		
		for(i=0;i<row;i++)
		{
			
		a[i] = new int[column];
		}
	
	for(i=0;i<row;i++)
	{

		for( j =0;j<column;j++)
		{
			cin>>a[i][j];
		
		}
	}
	
	}	


	
};





void matrix::add(matrix t1)
{



for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{

            	    cout<< a[i][j]+t1.a[i][j];

	}
}
	

}



void matrix::sub(matrix t2)
{



for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{

            	    cout<< a[i][j]-t2.a[i][j];

	}
}
	
   
}





void matrix::div(matrix t2)
{



for(int i=0;i<row;i++)
{
	for(int j=0;j<column;j++)
	{

            	    cout<< a[i][j]/t2.a[i][j];

	}
}
	
   
}




int main()

{
	
	matrix t3(2,2);
	matrix t2(2,2);
	t3.add(t2);
	t3.sub(t2);
	t3.div(t2);
	
}
