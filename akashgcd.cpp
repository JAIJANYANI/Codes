#include<stdio.h>
unsigned long int sum;
long int a[1000001];
long int findgcd(long int x,long int y)
{
	long int k,z,min;
	if(x>=y)
	min=y;
	else
	min=x;
		for(k=min;k>0;k--)
		{
			if(x%k==0&&y%k==0)
			{
				z=k;
				break;
			}
		}
		return(z);
}
void groupy(long int m)
{
	long int s;
	for(s=1;s<=a[m];s++)
	{
		sum=sum+(s/findgcd(s,a[m]));
	}
}
int main()
{
	long int n,x,y,i,q;
	
	char c;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	scanf("%ld",&q);

	for(i=0;i<q*2;i++)
	{
		scanf("%c%ld%ld",&c,&x,&y);
		if(c=='U')
		a[x-1]=y;
		else if(c=='C')
		{
			x--;
			sum=0;
			while(x<y)
			{
				groupy(x);
				x++;
			}
			sum=sum%1000000007;
			printf("%lu\n",sum);
		}
	}
	return 0;
}
