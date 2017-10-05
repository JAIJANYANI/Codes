#include<iostream>
using namespace std;
int main()
{
	int i,t,n,a[i],b[i],c[i],d,swap;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		for(i=0;i<n;i++)
		c[i]=a[i]+b[i];
		
	
		for (i=0;i<(n-1);i++)
  {
    for (d=0;d<n-i-1;d++)
    {
      if (c[d] > c[d+1]) 
      {
        swap= c[d];
        c[d]= c[d+1];
        c[d+1]=swap;
      }
    }
  }
int number =c[0];
		int m=number;
		int count=1;
		int countm=1;
		for(i=1;i<n;i++)
		{
			if (c[i]==number)
			{
				countm++;
				m=c[i];
			}
			else
			{
				if(count>countm)
				{
					countm=count;
					m=number;
				}
				number=c[i];
			}
		
		}
cout<<endl<<endl<<m;
}
return 0;
}
