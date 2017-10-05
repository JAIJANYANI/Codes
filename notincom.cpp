#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t,n,m,a[100000],b[100000],i,j,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<m;i++)
		cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
	for(i=0;i<n;i++){
		for(j=0;j<100;j++){
		
		if(a[i]==b[j])
		count++;
}}
		cout<<count<<endl;
		count=0;
	}
	
	
	
	
	
	
	
	
	return 0;
}
