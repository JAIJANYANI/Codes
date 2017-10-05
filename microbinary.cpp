#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int i,con=0,t;
	cin>>t;
	while(t--){
	int n;
	char s[100005];
	cin>>n;
	cin>>s;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='1')
		con++;
	}
	
	cout<<con<<endl;
}
	
	
	
	
	return 0;
}
