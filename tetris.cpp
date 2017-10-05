#include<iostream>
using namespace std;
int main()
{
	unsigned long int n,i,*p,*q,*a,*b,max;
	int t,j=-1,x, y,z;
	cin>>t;
	while(t--)
	{
		cin>>n;
		p=new unsigned long int[n];
		a=new unsigned long int[n];
			q=p;
		b=a;
		for(i=0;i<n;i++)
		{
			cin>>*q;
			q++;
		}
		for(i=0;i<n;i++)
		{
			cin>>*b;
			b++;
		}
	b=a;

		max=*b;
		unsigned long int g,h,d,f=0;
		for(i=0;i<n-1;i++)
		{
			b++;
			if(*b>max)
			max=*b;
		}
		q=p;
		b=a;
			if(n==1)
	{
	max=*b+*q;
	goto one;
	}
x=0;
y=0;
z=0;
		for(i=0;i<n;i++)
		{
	
			if(*b!=max)
			{
			
			if(y==0)
			{
			g=*b+*q;
			if(g==max)
			{
			*b=g;
			y=1;
			goto loop;
		    }
	        }
			if(x==0&&q>p)
		    {
				h=*b+*(q-1);
				if(h==max)
	        {
					*b=h;
                x=1;
                goto loop;
			}
			}
			if(g+h-*b==max&&q>p&&x==0&&y==0)
			{
				*b=g+h-*b;
				y=1;
				x=1;
				goto loop;
			}
			if(z==0&&q<(p+n-1))
			{
			d=*b+*(q+1);
			if(d==max)
		    {
				*b=d;
			z=1;
			goto loop;
			}
			}
			
			if(g+d-*b==max&&q<(p+n-1)&&y==0&&z==0)
			{
				*b=g+d-*b;
				y=1;
				z=1;
				goto loop;
			}
			if(d+h-*b==max&&q>p&&q<(p+n-1)&&x==0&&z==0)
			{
				*b=d+h-*b;
				z=1;
				x=1;
				goto loop;
			}
			goto abc;
		    }
		    loop :
		    q++;
		    b++;
		    f++;
x=y;
y=z;
z=0;
		}
		
		if(f==n)
		{
		one :
		cout<<max<<endl;
		}
		else
		{
		abc :
		cout<<j<<endl;
		}
		
	}
	return 0;
}

