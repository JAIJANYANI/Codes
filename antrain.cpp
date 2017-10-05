#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a;
		b=a;
		b=b%8;
		if(b==1)
		cout<<a+3<<"LB"<<endl;
		else if(b==2)
		cout<<a+3<<"MB"<<endl;
		else if(b==3)
		cout<<a+3<<"UB"<<endl;
		else if(b==4)
		cout<<a-3<<"LB"<<endl;
		else if(b==5)
		cout<<a-3<<"MB"<<endl;
		else if(b==6)
		cout<<a-3<<"UB"<<endl;
		else if(b==7)
		cout<<a+1<<"SU"<<endl;
		else if(b==0)
		cout<<a-1<<"SL"<<endl;
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
