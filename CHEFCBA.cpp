#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d;
	
	if(a/b==c/d||a/b==d/c||b/a==c/d||b/a==d/c)
	cout<<"Possible";
	else
	if(a/c==b/d||a/c==d/b||c/a==b/d||c/a==d/b)
	cout<<"Possible";
	else
	if(a/d==c/b||a/d==b/c||d/a==c/b||d/a==b/c)
	cout<<"Possible";
	else
	cout<<"Impossible";
	
	
	return 0;
}
