#include<iostream>
#include<new>
using namespace std ;
int main()
{
	int t,n,i,count=0,j;
	//static int f=0;
	cin>>t;
	int a[100],b[100];
	//unsigned long long int *a,*b;
	//a= new unsigned long long int[n];
	//b= new unsigned long long int[n];
	while(t--)
	{
		count=0;
		a[0]=0;
		cin>>n;
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++)
		cin>>b[i];
		for(i=0;i<n;i++){
		j=(a[i+1]-a[i]);
		if(j>=b[i+1])
		count++;
		else
		count=count;
		
		}
		
		
		
	cout<<count;	
	}
	
	
	
	return 0;
}

