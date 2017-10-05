#include<iostream>
#include<new>
using namespace std;
int main()
{
	int t,c,swap,d,i;
	float sum=0,avg;
	int n;
	
	int *a=NULL;
	
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		int *a=NULL;
		a=new int[n];
		for(i=0;i<n;i++)
			{
			cin>>a[i];	
			}
		
	
	
	for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1]) 
      {
        swap= a[d];
        a[d]= a[d+1];
        a[d+1]=swap;
      }
    }
  }
	
	
	
	/*for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	*/
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	avg=sum/n;
	//cout<<avg;


	if(a[n-1]==5&&avg>=4)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;

//	delete []a;
//		a=NULL;
}
	
	return 0;
}
