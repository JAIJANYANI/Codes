#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d;
	
	if(a/b==c/d||b/a==c/d||a/c==b/d||a/b==d/c||c/b==a/d||d/b==c/a||a/d==c/b)
	cout<<"Possible"<<endl;
	else
	cout<<"Impossible"<<endl;
	
	
	return 0;
}
