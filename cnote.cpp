#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int x,y,k,n,p[100002],c[100002],i,t;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%d%d%d",&x,&y,&k,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&p[i],&c[i]);
		}
		for(i=0;i<n;i++)
		{
			if(c[i]<=k)
			{
				if((x-y)==p[i])
				goto end;
				else 
				continue;
			}
		}
		goto end2;
	
	
	end:
		cout<<"LuckyChef"<<endl;
		goto end3;
		
	
	end2:
		cout<<"UnluckyChef"<<endl;
	end3:;
	
		}
	
	
	return 0;
}
