#include<iostream>
using namespace std;
int main()
{
	int t,n,v,u,i,in,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int p[n];
		for(i=0;i<n;i++)
		cin>>p[i];
		char m[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			m[i][j]='0';
		}
		for(i=0;i<n-1;i++)
		{
			cin>>v>>u;
			m[v-1][u-1]='1';
			m[u-1][v-1]='1';
		}
		
		for(i=0;i<n;i++)
		{
	long int max=0;
		int	l=0;
			for(j=0;j<n;j++)
			{ 
				if(m[i][j]!='1' && j!=i)
				{
					if(p[j]>max)
					{
						max=p[j];
						l=j+1;
					
					}
				}
			}
			cout<<l<<" ";
		}
		cout<<endl;
	 } 
}
