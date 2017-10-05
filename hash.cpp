#include<iostream>
#include<stdlib.h>
using namespace std;
struct hasha
{
	unsigned long long int i,p,h;
}*m,*k,*v;

int main()
{
		unsigned long long int n,q,a,b,s,d,sum,temp;
		cin>>n>>q;
		m=new struct hasha[n];
		k=m;
		for(unsigned long long int j=1;j<=n;j++)
	{
			k->i=j;
			k->p=0;
		k++;
    }
	for(unsigned long long int j=1;j<=q;j++)
	{
		cin>>a>>b;
		k=m;
		while(k->i!=a)
		k++;
		k->p=k->p+b;
		for(s=0;s<n-1;s++)
		{
			k=m;
			v=k;
			v++;
			for(d=0;d<n-1-s;d++)
			{
				if(k->p<v->p)
				{
					temp=k->p;
					k->p=v->p;
					v->p=temp;
					temp=k->i;
					k->i=v->i;
					v->i=temp;
				}
				v++;
				k++;
			}
		}
		k=m;
		k->h=1;
		for(d=2;d<=n;d++)
		{
			v=k;
			v++;
			if(v->p<k->p)
			v->h=d;
			else
			v->h=k->h;
			k++;
		}
		sum=0;
		k=m;
		for(s=0;s<n;s++)
		{
		sum=sum+k->h*k->p;
		k++;
	}
	cout<<sum<<endl;
	}
}
