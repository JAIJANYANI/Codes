#include<iostream>
using namespace std;
int main()
{
	int t;
	unsigned long int k,a[26000],con,m,d,i,j,p;
	long int n;
	char w[100050],b[26000];
	cin>>t;
	while(t--)
	{
		cin>>w;
		cin>>k;
	
		
		b[0]=w[0];
		a[0]=1;
		con=2000;
		i=1;
		while(w[i]!='\0')
		{
			for(j=0;j<con;j++)
			{
				if(w[i]==b[j])
				{
				a[j]++;
				break;
		        } 
			}
			if(j==con)
			{
				b[j]=w[i];
				a[j]=1;
				con++;
			}
			i++;
		}
		d=0;
		for(j=0;j<con-1;j++)
		{
			for(m=j+1;m<con;m++)
			{
			n=a[m]-a[j];
			if(n<0)
			n=-n;
			p=0;
			if(k<n)
			{
				p=n-k;
				if(a[m]>a[j])
				a[m]=a[m]-p;
				else
				a[j]=a[j]-p;
			}
			d=d+p;
				
			}
		}
	
		cout<<d<<endl;
	}
	return 0;
}
