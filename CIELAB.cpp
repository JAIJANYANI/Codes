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
h=((c%10000-c%1000 %100)/1000)+1;
if(g>>1&&g<<9){

g=g-1;
cout<<endl<<h<<g<<f<<e;
}
else if(f>>1&&f<<9)
{
f=f-1;
cout<<endl<<h<<g<<f<<e;
}
else if(e>>1&&e<<9)
{
e=e-1;
cout<<endl<<h<<g<<f<<e;
}
	
	return 0;
}

