#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	long long int c,d,l;
	cin>>t;
	while(t--)
	{
		cin>>c>>d>>l;
		a=d*4;
		b=(c+d)*4;
		if(l<=b && l>=a && l%4==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;	
	}	
	return 0;
}

