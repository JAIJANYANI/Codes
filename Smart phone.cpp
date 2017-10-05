#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
	unsigned long long n,a[100000],b[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
			for(i=0;i<n;i++)
			{
			for(j=0;j<n-1;j++)
			{
			if(a[j]<a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;	
			}
			}
			}	
			for(i=0;i<n;i++)
			{
				b[i]=i+1;
			}
		for(i=0;i<n;i++){
				
		if((a[i]*b[i])>(a[i+1]*b[i+1])&&(a[i]*b[i])>(a[i+2]*b[i+2])&&(a[i]*b[i])>(a[i+3]*b[i+3]))
		{
		
			cout<<a[i]*b[i];
			break ;
		}
	
			else
			continue ;
}
	
	return 0;
}
