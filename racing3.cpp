#include<iostream>
#include<stdlib.h>
#include<new>
using namespace std;
int main()
{ 

int n ,i,temp, j, c, t;
unsigned long long int *s;
cin>>t;
s= new unsigned long long nt[n]; 
while(t--){ 
		//cin>>n;


	for(i=0;i<2;i++)
	{
		s[i]=10000+i;
	}
				for(i=0;i<n;i++)
			{
			for(j=0;j<n-1;j++)
			{
			if(s[j]>s[j+1])
			{
			c=s[j+1];
			s[j+1]=s[j];
			s[j]=c;	
			}
			}
			}	
	
	temp=abs(s[0] -s[1] ) ;
	for(i=0;i<(n-1) ;i++){ 
	
	if (temp>abs(s[i+1] -s[i+2] ) ) 
	temp=abs(s[i+1]-s[i+2]) ;
	else 
	continue;
	} 
	cout<<temp<<"\n"; 
}
	return 0;
}
