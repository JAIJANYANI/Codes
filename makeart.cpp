#include<iostream>
using namespace std;
int main()
{
	int t,n,i,a[100005],b[100005],c[100005],flag,flags,temp,temp2;
	cin>>t;
	while(t--)
	{
		flag=0;flags=0;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		
		for(i=0;i+2<=n-1;i++)
		{
			temp=a[i];
			b[i]=b[i+1]=b[i+2]=temp;
			
		}
		
		for(i=n-1;i-2>=0;i--)
		{
			temp2=a[i];
			c[i]=c[i-1]=c[i-2]=temp2;
		}
		
	;
		
		for(i=0;i<n;i++)
		{
		
		if(a[i]==b[i]){
		
		flag=1;
	
	}
		else  {
		
		flag=0;
		break ;
		}}
	
		for(i=0;i<n;i++)
		{
		if(a[i]==c[i])
		{
		
		flags=1;
	
		}
		else
		{
		flags=0;
		break ;
		}}
		
		for(i=0;i<1;i++){
		
		if (flag==1||flags==1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
}
	}
	
	
	
	
	
	
	return 0;
}
