#include<bits/stdc++.h>
using namespace std;
int main()
{
	float t,s,v,ans;
	//int t;
	//unsigned long int s,v;
	//float ans;
	
	cin>>t;
	while(t--)
	{
		cin>>s>>v;
		ans=(s/1.499998)/v;
		
		if(ans<=0.0000001)
		cout<<"0.0000001";
		else
	cout << fixed << setprecision(6)<<ans<<endl;
	}
	
	
	
	return 0;
}
/*
2
2 5
1 1000000000

0.266667
0.0000001
*/
