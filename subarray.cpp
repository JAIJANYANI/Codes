#include<iostream>
#include<algorithm>
using namespace std;
unsigned long int sum;
int check(unsigned long int p[],int j, int k)
{
	int i;
	for(i=j;i<k;i++)
	{
		for(int m=i+1;m<=k;m++)
		{
			if(p[i]==p[m])
			return 1;
		}
	}
	return 0;
}
void ch(unsigned long  int p[],int i, int n)
{
	
	int j=0,o;
	int k=i-1;
	int y=k;
	for(int m=0;m<n;m++)
	{
		o=check(p,j,k);
		if(o==0)
		sum=sum+i;
		j++;
		k++;
	}
}
int main()
{
	int t,n,i;
	unsigned long int a[100001];
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lu",&a[i]);
			sum=n;
			
		}
		for(i=2;i<=n;i++)
		{
			ch(a,i,n);
		}
		printf("%d\n",sum);
	}
	return 0;
}
