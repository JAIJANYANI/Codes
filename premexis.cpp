#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,n2,count=0;
	unsigned long int a[100005];
	cin>>t;
	while(t--)
	{
		cin>>n;
		n2=n-1;
		count=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		i=0;
		while(n2--)
		{
			
			if(a[i]-a[i+1]==0 || a[i]-a[i+1]==-1 || a[i]-a[i+1]==1 )
			count++;
			
			else 
			count=count;
			
			i++;
			
		}
		//cout<<count;
	if(count==n-1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
		
		
	}
	
		
	return 0;
}
