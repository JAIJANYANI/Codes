#include <stdio.h>
 
void findPair(int* a,int n,int k)
{
	int hash[10]={0},i;
	for(i=0;i<n;i++)
	{
		if(!hash[a[i]])
		{
			if(hash[k-a[i]])
				printf("%d %d\n",a[i],k-a[i]);
			else
				hash[a[i]]=1;
		}
	}
}
 
int main ()
{
	int arr[]={1,2,3,4,5},size;
	size=sizeof(arr)/sizeof(arr[0]);
 
	findPair(arr,size,8);
 
	return 0;
}
