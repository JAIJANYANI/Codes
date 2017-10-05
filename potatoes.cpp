#include<iostream>
using namespace std;
int checkprime(int x)
{
	int i,flag=0;
	for(i=2;i<x/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	
	}
		if(flag==0)
		return 0;
		else
		return 1;
	
}
int main()
{
	int t,i,x,y,z,flag=0,z1,j;
	cin>>t;
	while(t--)
	{
		
		cin>>x>>y;
		z=x+y;
		if(z==0){
		
		cout<<1<<endl;
		goto loop;
	}
		else if(z==1){
		
		cout<<1<<endl;
		goto loop;
	}
		else if(z==2){
		
		cout<<1<<endl;
		goto loop;
	}
		else if(z==3){
		
		cout<<2<<endl;
		goto loop;
	}
		else if(z>3){
		
		for(i=1;i<10000;i++)
			{
			z1=z+i;
				
			if(checkprime(z1)==0)
			break;
				
			}
	}
		cout<<z1-z<<endl;
		
		
		loop:;	
		
	}
	

	return 0;
}
