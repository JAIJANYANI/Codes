#include<bits/stdc++.h>
using namespace std;

int merge(int int1, int int2)
{
    int int2_copy = int2;
    do
    {
        int1 *= 10;
        int2_copy /= 10;
    } while (int2_copy);

	
    return int1 + int2;
}
int main()
{
	 long long int t,a,n,m,n1,end,i,arr[100],test;
	 long long int x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>a>>n>>m;
		x=merge(a,a);
		n1=n-2;
		y=a%m;
		z=x%m;
		if(n==1){
		
		y=a%m;
		arr[0]=0;
		arr[1]=y;
		test=0;
		//cout<<arr[1];
	}
		else if(n==2){
		
		z=x%m;
		arr[2]=z;
		arr[1]=y;
		arr[0]=0;
		test=1;
		//cout<<arr[2];
	}
		else if(n>2)
		{	i=1;
		do{
		arr[0]=0;
		arr[2]=z;
		arr[1]=y;
		x=merge(x,a)%m;
		arr[i+2]=x;	
		i++;
		test=i;
		//cout<<"jai";
	}while(x!=0);
	}
	
	//cout<<test;
		//z=y%m;
		for(i=1;i<=20;i++)
		{
			if(arr[i]==0)
			{
				end=i;
				break;
			}
		}
		cout<<end<<"\t";
		cout<<arr[n%end]<<endl;		
}
		return 0;
	}
	

