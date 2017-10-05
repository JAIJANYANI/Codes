#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,a[100],c[100],ans=0,i,j,x;
	cin>>t;
	while(t--)
	{
		ans=0;
		
		cin>>n>>k;
		for(i=1;i<=n;i++)
		cin>>a[i];	
		
		for(i=1;i<=n;i++)
		{
			if(a[i]==i)
			{
			x=a[i];
			a[i]=0;
			for(j=1;j<=n;j++)
			{
				if(a[j]==x)
				a[j]=0;
			}
		
		
		}
		}
		
		for(i=1;i<=n;i++)
		c[i]=0;
		
		for(j=1;j<=n;j++)
		{
			for(i=1;i<=n;i++)
			{
				if(a[i]==j)
				c[j]++;
			}
		}
		//cout<<c[1]<<"\t"<<c[2]<<"\t"<<c[3];
		for(i=1;i<=n;i++)
		{
			if(c[i]>=k)
			ans++;
			
		}
		
		
		
		cout<<ans<<endl;
		
		
	}
	
		
	
	return 0;
}
