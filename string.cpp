#include<iostream>
using namespace std;
int main()
{
    int i,j,t;
    char ar[100];
   cin>>t;
    while(t--)
	{
	int con=0;
    cin>>ar;
    for(i=0;ar[i+1]!='\0';i++)
    {
        j=i+1;
        
            if(ar[i]=='z'&&ar[j]=='a')
            {  
                con++;
            }
            if(ar[i]=='a'&&ar[j]=='z')
            {  
                con++;
            }
            if(ar[j]==ar[i]-1||ar[j]==ar[i]+1)
            {  
                con++;
            }
       
        
    }
    if(con==i)
    printf("YES\n");
    else
    printf("NO\n");
}
   return 0;
}
