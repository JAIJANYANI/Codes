#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,h,m,n,a[102],x,i,s=2,flag;
	cin>>t;
	while(t--)
	{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	sort(a,a+n);
	while(m>0){
	
	//cout<<"updated m"<<m;
	for(i=0;i<n;i++)
	{
		if(a[i]<=m ){
		
		x=a[i];
		//a[i]=0;
		//cout<<x<<" ";
	}
		else
		break;
	}
	
	if(m>0){
	
	m=m-x;
	//cout<<m<<" ";
	if(m==0)
	flag=0;
	

}

}
if(flag)
cout<<"No"<<endl;
else 
cout<<"Yes"<<endl;
}
	return 0;
}
