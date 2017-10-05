#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,p,a[100005],b[5],flag;
	
	cin>>n>>k>>p;
	for(i=1;i<=n;i++)
	cin>>a[i];
	
		for(i=0;i<p;i++)
		{
		
		cin>>b[1]>>b[2];
		if((a[b[2]]-a[b[1]])<=k)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
		
		}
	
	/*if(flag)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;*/
}
