#include<iostream>
using namespace std;
int main()
{
	int sum=0,i,b,x,a,n,count=0,set,cnt,loop,bb=0;
	cin>>loop;
	while(bb<loop)
	{
		
		cin>>a;
		cnt=a;
		while((cnt/9)>0)
		{
			count++;
			cnt=cnt/10;
		}
	
		for(i=0;i<count+1;i++)
		{
		n=a%10;
		sum=sum+n;
		a=a/10;
		}
		
		cout<<sum<<endl;
		sum=0;
	bb++;
	}
	
	return 0;
}






