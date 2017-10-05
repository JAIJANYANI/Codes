#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a[100005],count=0,ans,i,x;
	cin>>t;
	while(t--)
	{
	cin>>n;
	count=0;
	for(i=0;i<n;i++)
	cin>>a[i];	
	
	
	for(i=0;i<n;i++){
		
		if(a[i]==0)
		count++;
	}	
		
	for(i=0;i<n;i++){
		
		if(a[i]==0){
		
		x=i;
		break;
	}	}
	
	
	if(count==0)
	cout<<0<<endl;
	else{
	
	ans=count*1000 + (n-x)*100;	
	cout<<ans<<endl;
	}}
	
	
	
	
	
	
	
	return 0;
}

