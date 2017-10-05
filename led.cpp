#include<bits/stdc++.h>
using namespace std;
int l=8;
int funct()
{
	
	cout<<l;
	l--;
}
int main()
{

int a[10],i,x=1,j,k=8,n=2,b=0,q;


for(j=1;j<=8;j++){

a[j]=j;
//cout<<sizeof(a[j])<<endl;

for(q=b;q<8;q++){

for(i=1;i<x;i++){

cout<<a[i]<<"\t";

}
cout<<"blink";
funct();
cout<<endl;
}
b++;
l=8;
cout<<endl;
x++;

}

	return 0;
}
