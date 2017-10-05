#include<iostream>
using namespace std;
int main()
{
	int t,*p,*q;
	int *a,*b,n,i,con,ad,pd,d,f,g;
	cin>>t;
	while(t--)
	{
		cin>>n;
		p=new int[n];
		a=new int[n];
		q=p;
		b=a;
		con=0;
		d=0;
		f=0;
		g=0;
		for(i=0;i<n;i++)
		{
			cin>>*q;
			if(*q==1)
			con++;
			q++;
		}
		for(i=0;i<n;i++)
		{
			cin>>*b;
			b++;
		}
		q=p;
		b=a;
		while(con!=n)
		{
			while(*q==1)
			{
				q++;
				b++;
			}
			if(q>p)
			{
			pd=*b-*(b-1);
			if(pd<0)
			pd=-pd;
			f=-1;
		    }
			i=1;
			while(*(q+i)==0&&(q+i)<=(p+n-1))
			{
				i++;
			}
			if((q+i)<=(p+n-1))
			{
			ad=*b-*(b+i);
			if(ad<0)
			ad=-ad;
			g=-1;
		    }
			if(pd<ad&&f==-1&&g==-1)
			d=d+pd;
			else if(pd>ad&&g==-1&&f==-1)
			d=d+ad;
			else if(f==-1&&g==0)
			d=d+pd;
			else if(f==0&&g==-1)
			d=d+ad;
			con++;
			*q=1;
		}
		cout<<d<<endl;
	}
	return 0;
}
