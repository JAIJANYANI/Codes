#include<iostream>
using namespace std;
int main()
{
	
int a,b,c,e,f,g,h;
cin>>a>>b;
c=a-b;
e=c%10;
f=(c%100-c%10)/10;
g=((c%1000-c%100-c%10)/100)+1;
h=((c%10000-c%1000-c% 0)/1000)+1;
if(a%10!=9){
h=h-1;
cout<<endl<<h<<g<<f<<e;
}
else
{
h=h+1;
g=g-1;
cout<<endl<<h<<g<<f<<e;
}
return 0;
}


