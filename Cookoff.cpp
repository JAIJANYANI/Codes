#include<iostream>
using namespace std;
int main()
{
	int t,j;
	unsigned long int i,r,k;
	unsigned long long int f;
	cin>>t;
	while(t--)
	{
		f=0;
		cin>>i>>r;
		while(i<=r)
		{
			f (k=1;k<=i;k++)
			{
				if(k%2!=0&&i%k==0)
				f=f+k;
				
		}
			i++;
		}
	cout<<f<<endl;
	}
	return 0;
}
