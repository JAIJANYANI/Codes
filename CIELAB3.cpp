#include<iostream>
using namespace std;
int main()
{
	
int a,b,c;
cin>>a>>b;
c=a-b;
if(c%10==0)
c=c+1;
else
{
c=c-1;
if(c%10==0)
c=c+2;
}
cout<<c<<endl;
return 0;
} 