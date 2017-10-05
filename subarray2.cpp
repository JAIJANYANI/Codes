#include<iostream>
#include<stdlib.h>
using namespace std;
long int sum;
int answerr(  long int p[],int i,int k)
{
	for(int m=i+1;m<=k;m++)
	{
		if (p[i] == p[m])
		return 1;
	}
	return 0;
}
int checkdupli(    int p[],int j,int k)
{
	int i;
	    int max=p[j];
	for(i=j+1;i<=k-j;i++)
	{
		if(p[i]>max)
		max=p[i];
	}
/*	sort(p+j,p+k+1);*/
    int *con=(    int *)calloc(sizeof(    int),max+1);
fill_n(con,max+1,0);
/*    int con[1000000001];*/
/*fill(con,con+1000000001,0);*/
/*    int con=new     int[max];*/
for(i=j;i<=k;i++)
{
	if(con[p[i]]==1)
	return 1;
	else
	con[p[i]]++;
}
free(con);

	return 0;
	
	
}

void chutiya(    int p[],int i, int n)
{
	int j=0,o;
	int k= i-1;
	int y=k;
	for(int m=0;m<n-y;m++)
	{
		
		
		o = checkdupli(p,j,k);
		if(o==0)
		sum=sum+i;
	
		j++;
		k++;
	}
	
	
	
}
int main()
{
	int t,n,i ;
	    int a[101];
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
			chutiya(a,i,n);
			
			
		}
		printf("%lu\n",sum);
		
	}
	
	
	
	
	return 0;
}
