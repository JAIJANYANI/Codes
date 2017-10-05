#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int t,n,i,b,m,tim=0,s;
	cin>>t;
	while(t--)
	{
	
	cin>>n>>b>>m;
	s=n/2;
	while(s--){
	
	
		if(n==1)
		{
		n=(n+1)/2;
		tim=tim+n*m;
		n=n-1;	
		m=m*2;	
		//cout<<tim<<" C ";
		}
		
		else if(n%2==0)
		{
		n=n/2;
		tim=tim+n*m+1;
		m=m*2;	
			
		//cout<<tim<<" A ";	
		}
		
		else if(n%2==1)
		{
		n=(n+1)/2;
		tim=tim+n*m+1;
		n=n-1;	
		m=m*2;
		//cout<<tim<<" B ";	
		}
		
			
		}	
	
	
	cout<<tim<<endl;	
		
	}
	
	
	
	
	
	
	
	return 0;
}
