#include<stdio.h>
int main()
{
	int t,i;
	unsigned long long int c,b,k,n,j;
	b=1000000007;
	while(1)
	{
		scanf("%d",&t);
		if(t<=100)
		break;
	}
	for(i=0;i<t;i++)
	{
	scanf("1 lu%llu",&n,&k);
	c=k;
	for(j=1;j<n;j++)
		c=c*(k-1)%b;
		printf("%llu\n",c);
	}
	return 0;
} 
