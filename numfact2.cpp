#include <bits/stdc++.h>
//#include<stdio.h>
using namespace std;
int main()
{
  int i,t,a[100000],con=0,n;
  unsigned long long int b=1;
  scanf("%d",&t);
  //cin>>t;
  while(t--)
  {
  	scanf("%d",&n);
  	b=1;
  	i=1;
  	while(i<=n)
  	{
	  
  scanf("%d",&a[i]);
  //	cin>>a[i];
	b=b*a[i]; 
	i++; 
  }
  	con=0;
  	i=1;
  	while(i<=b)
  	
  {
  	
      if(b%i==0)
      	//b/i;
         con++;
    	i++;
	     //cout << i << endl;
  }
  	
	  printf("%d\n",con);
	  //cout<<con<<endl;
  	
  	
  	
  	
  }
  
  return 0;
}
