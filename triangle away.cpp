#include<iostream>
#include<stdlib.h>
#inclu <new>
using namespace std;
int main()
{
		int t,sum=0;
		unsigned long long int i,n;
		cin>>t;
		while(t--)
		{
		
		cin>>n;
		i=1;		
		while(n>=i)
		{
			n=n-i;
			i++;
		}
		cout<<i-1<<endl;	
		}
}
