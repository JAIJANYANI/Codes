#include<iostream>
using namespace std;
int main()
{	
	unsigned long long int a[105],num=1,i;
	int t,n;
	cin>>t;
	while(t--){
	num=1;
	cin>>n;
	for(i=0;i<n;i++){
	
	cin>>a[i];
	num=((num*a[i])%1000000007)%1000000007;
}
	
	for(i=2 ;i<10000000000000;i++)
	{
		if(num% (i*i)==0)
		{
			cout<<i<<endl;
			break;
		}
		
	}
	
	
}
	
	
	
	return 0;
}
