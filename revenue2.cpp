#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
	unsigned long long int n,a[6000],b[6000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=i*i;
		
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
		
		
		
		
		
		for(i=0;i<n;i++)
			{
				
				cout<<"\t"<<a[i];
			}
			cout<<endl;
			for(i=0;i<n;i++)
			{
				
				cout<<"\t"<<b[i];
			}

		
		
		
		
		
		
				for(i=0;i<n;i++){
				
		if((a[i]*b[i])>(a[i+1]*b[i+1])){
		
			cout<<endl<<endl<<a[i]*b[i]<<endl<<i<<endl<<a[i]<<endl<<b[i];
			break ;
	}
	
			else
			continue ;
}
	
	return 0;
}
