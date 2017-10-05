#include<stdio.h>
int main()
{
	int t,f,x,y,sum,i,j,k,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		sum=x+y;
		m=sum;
		f=1;
		i=1;
		while(f)
		{
			k=0;
			sum=m+i;
			
			for(j=2;j<=sum/2;j++)
			{
				if((sum%j)==0)
				{
					k=1;
					break;
				}
 
			}
			if(k!=1)
			 {
			 	f=0;
			 	printf("%d\n",i);
			 }
			 i++;
		}
	}
	return 0;
} 
