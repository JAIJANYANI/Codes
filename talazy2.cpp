#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,b,m,i,tim=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>b>>m;
		
		for(i=1;i<n/2+5;i++){
		
		if(n%2==0)
		n=n/2;
		else
		n=(n+1)/2;
		tim=tim+ n*m;
		tim=tim+1;
		m=2*m;
		
		
		if(n%2 !=0)
		n=n-1;
		}
		
		
		
		cout<<tim<<endl;
		
	}
	
	
	
	
	
	
	return 0;
}
