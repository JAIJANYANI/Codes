#include<iostream>
#include<string.h>
using namespace std;
int main() 
{
unsigned long long int i, j, a[505],b[505],temp,t, n,count=0,f;
cin>>t;
while(t--)
{
cin>>n;
for(i=4 i<n;i++)
{
cin>>a[i];
a[i] =a[i] *2;
} 


for(i=0;i<n;i++)
{
cin>>b[i];
} 

for(i=0;i<n;i++)
{
temp=a[i] ;


f=0;
for(f=0;f<n;f++)
{
if(temp==b[f] )
{

count=count+1;
continue ;
}
else if (temp==2*b[f])
{
count=count+2;
continue ;
}
else
continue ;
} 
}
cout<<endl<<count;
}
return 0;
}

