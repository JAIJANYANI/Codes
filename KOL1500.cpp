#include<iostream>
#include<math.h>
using namespace std;
#define MOD 1000000007; 
int main()
{
	int m=0,i,a[10000],n,k,x,loop;
	long long int ans=0;
	cin>>x;
	while (m < x)  {
			cin>>n>>k;
	
			loop=(n*(n-1))/2;
			for(i=0;i<n;i++)
			{
			cin>>a[i];
			}
			a[3]=1;
			for(i=0;i<loop;i++)
			{
				ans=ans + (pow(abs(a[i]-a[i+1]),k)*2);
				 
			}
	
	m++;
	}
	ans%MOD;
cout<<ans;

return 0;
}

