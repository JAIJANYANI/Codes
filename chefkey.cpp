#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c,i,t,a[1000005],b[1000005],count=0,j;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n>>m>>c;
		for(i=1;i<=n;i++)
		{
			a[i]=i;
		}
		for(i=1;i<=m;i++)
		{
			b[i]=i;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i]*b[j]==c)
				count++;
				
			}
			
		}
	
	cout<<count<<endl;	
	}
	
	return 0;
}
