#include<iostream>
using namespace std;
class jai{
	int m,n;
	public:
	void getdata(int ,int);
	void dispdata();
	
};

void jai :: getdata(int a,int b)
{
	m=a;
	n=b;
}

void � i :: dispdata()
{
	cout<<endl<<endl;
	cout<<m<<n;
	
}
int main()
{
	jai s;
	int a=5;
	int b=10;
	s.getdata(a,b);
	s.dispdata();
	
}

