#include<iostream>
using namespace std;
int main()
 
	int t,v,con,i,c;
	char s[51];
	cin>>t;
	while(t--)
	{
		cin>>s;
		v=0;
		con=0;
		c=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
			{
				v++;
				if(con<3)
				con=0;
			}
			else
			{
				c++;
				con++;
			}
		}
		if(con>=3||c>v)
		cout<<"hard"<<endl;
		else
		cout<<"easy"<<endl;
	}
	return 0;
}
