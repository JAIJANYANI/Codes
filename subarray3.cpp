#include<iostream>
using namespace std;
int main()
{
	int t,n,a[100],i,o,p,b[100],j,k;
	cin>>t;
	while(t--){
	
	cin>>n;
	for(i=0;i<n;i++){
	
	cin>>a[i];
}

o=0;p=2;
for(k=0;k<n;k++){

for(i=o;i<p;i++){
b[i]=a[i];}
for(i=o;i<=p-o;i++)
cout<<b[i];
cout<<endl;
o=o+1;
p=p+1;
}
/*
for(i=1;i<4;i++){
b[i]=a[i];}
cout<<b[1]<<b[2]<<b[3]<<endl;
*/	

	
	
	return 0;
}}
