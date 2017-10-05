#include<iostream>
using namespace std;
int main()
{
	unsigned long int n,s,k,i,z,f;
	char *p,*q,*a,*b,*m,*v,c;
	cin>>n>>k;
	p=new char[n];
	a=new char[n];
	m=new char[n];
	q=p;
		cin>>q;
		
	cin>>s;
	while(s--)
	{
		b=a;
		z=0;
		cin>>b;
		q=p;
		v=m;
		for(i=0;i<n;i++)
		{
			b=a;
			while(*b!=NULL)
			{
				if(*b==*q)
				{
		           break;
				}
				b++;
			}
			if(*b==NULL)
			{
					*v=*q;
					v++;
			}
			q++;
		}
		*v=NULL;
		v=m;
		c=*v;
		v++;
		f=1;
		while(*v!=NULL)
		{
		if(*v==c)
		{
			f++;	
		}
		else
		{
			z=z+(f*f);
			c=*v;
			f=1;
		}
		v++;
	}
	z=z+(f*f);
	cout<<z<<endl;
}
}
