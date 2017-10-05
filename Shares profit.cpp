#include<iostream>
using namespace std;
int main()
{
	int start,i,n;
	float sum;
	
	cout<<endl<<"enter starting value";
	cin>>start;
	cout<<endl<<"enter no of years";
	cin>>n;
	sum=start;
	
	while(n--){	
	sum=sum+(.1*sum);
cout<<endl<<"sum is"<<sum;
}
	
	
	
	
	
}
