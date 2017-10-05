#include<iostream>
using namespace std;
int main()
{
	int n,k,i;
	unsigned long int a[100001],sum=0;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	cin>>a[i];
	i=1;sum=0;
	
	while(n!=0)
	{
		sum=sum+(n*a[i]);
		n=n-k;
		i++;
	}
	cout<<sum<<endl;
	
	
	
	
	return 0;
}
