#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
		void input(int x , int y)
		{
			r=x;
			i=y;
		}
		friend complex sum(complex,complex);
		vo[  display(complex a)
		{
			cout<<endl<<a.r<<endl<<a.i;
		}
};
complex sum (complex a, complex b)
{
	complex c;
	c.r=a.r+b.r;
	c.i=a.i+b.i;
	return(c);
}
int main()
{
	complex a,b,c;
	a.input(2,3);
	b.input(4,5);
	c=sum(a,b);
	a.display(a);
	b.display(b);
	c.display(c);
	return 0;
}
