#include<iostream>
using namespace std;
class bill
{
	public:
	int obj[100],sum;	
	
	void getitems();
	void billitems();
	friend void sum(bill bb);
};
void bill :: getitems()
{	
	int i;
	
	for(i=0;i<100;i++)
	{
	
	cout<<"enter no of obj";
	cin>>obj[i];
	}
}

void bill :: billitems()
{	
	int i;
	int n;
	
	for(i=0;i<100;i++)
	{	
	
		getitems();
		
	}
		sum=(obj[1]*1000)+(obj[2]*2000)+(obj[3]*3000)+(obj[4]*4000);
		
	
	cout<<"your total bill is"<<sum;
	
}

void sum(bill bb)
{
	cout<<"your total bill is"<<bb.sum;
}
int main()
{	bill b;

	b.billitems();
	sum(b);
	return 0;
}
