#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,a[4];
	cin>>t;
	while(t--)
	{
		scanf("%d%d%d%d", &a[0],&a[1],&a[2],&a[3]);
		sort(a,a+4);
		//printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
		if(a[0]==0 || a[1]==0 || a[2]==0 || a[3]==0)
		printf("Yes\n");
		else
		if(a[0]+a[1]==0 ||a[0]+a[2]==0||a[0]+a[3]==0 || a[2]+a[3]==0 ||a[1]+a[2]==0||a[1]+a[3]==0 ||a[0]+a[1]+a[2]==0 ||a[0]+a[1]+a[3]==0||a[0]+a[2]+a[3]==0 ||a[1]+a[2]+a[3]==0 ||a[0]+a[1]+a[2]+a[3]==0)
		printf("Yes\n");
		else
		printf("No\n");
		
	}
	
	
	
	
	return 0;
}
