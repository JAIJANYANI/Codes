#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,p,a[100],q,con=0,j,s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>n>>p>>q;
		s1=q;
		s2=p;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		i=0;con=0;
		if(p==0)
		{
			if(n<s1)
			{
			while(n--){
			
			a[i]=a[i]-2;
			q=q-1;
			if(a[i]==0){
			con++;
			i++;
			
			}}}
			
			else 
			{
			while(s1--){
			
			a[i]=a[i]-2;
			q=q-1;
			if(a[i]==0){
			con++;
			i++;
			
			}}
			}
		}
		
		else if(q==0)
		{
			if (n<s2)
			{
			while(n--){
			
			a[i]=a[i]-1;
			p=p-1;
			if(a[i]==0){
			con++;
			i++;
			
			}}}
			
			else
			{
			while(s2--){
			
			a[i]=a[i]-1;
			p=p-1;
			if(a[i]==0){
			con++;
			i++;
			
			}}	
			}
		}
		
		
		
		cout<<con<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
