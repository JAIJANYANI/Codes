#include <iostream>
using namespace std;
int main()
{
  int i,t,a[100000],con=0,n;
  unsigned long long int b=1;
  cin>>t;
  while(t--)
  {
  	cin>>n;
  	b=1;
  	for(i=1;i<=n;i++){
	  
  	cin>>a[i];
	b=b*a[i];  
  }
  	con=0;
  	for(i=1;i<=b;++i)
  {
  	
      if(b%i==0)
         con++;
         //cout << i << endl;
  }
  	cout<<con<<endl;
  	
  	
  	
  	
  }
  
  return 0;
}
