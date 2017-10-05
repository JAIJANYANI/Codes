#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	unsigned long long int a[100005],temp,temp2,temp3,temp4;
	cin>>t;
	while(t--)
	{
	cin >>n;
		while(n--)
		{
		cin>>a[i];	
			
		}	
	
		for(i=0;i<n;i++)
		{
		
		temp=a[i+1]-a[i];
		temp2=a[i+2]-a[i+1];
		if(temp==temp2 )
		con++;
		}
		
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
