#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;


// remove inplace , time: O(n^2), additional space: O(1)

bool IsSubString(string s1, string s2)
{
   int len1 = s1.length();
   int len2 = s2.length();
   cout<<len1<<len2;
   if(len1 >= len2)
   {
     for(int i =0 ; i < len2-len1+1; i++)
     {
        if(s1.compare(s2.substr(i,len1)) == 0)
          return true;
     }
   }
   return false;
}
void rem_dup_str(char *str)
{
        
        if (!str)
                return;
        if (strlen(str) < 2)
                return;
        

        int j, end = 1;
        for (int i = 1; str[i] != '\0' ; i++){
                for (j = 0; j<end; j++)
                        if (str[i] == str[j])
                                break;
                                if (j == end)
                                        str[end++] = str[i];  
        }
        str[end] = '\0';
}



void rem_dup_str_buffer(char *str)
{
        if (!str)
                return;
         

        int end = 0;
        bool dup[256] = {false};
        for (int i = 0; str[i] != '\0'; i++)
        {
                if (dup[(int) str[i]])                    
                        continue;
                else
                {
                        dup[(int) str[i]] = true;
                        str[end++] = str[i];                    
                }
        }
        str[end] = '\0';
}
/*
// Test it!
int main()
{
        char str[] = "Remove dublicate chars from string!"; 
        cout << "original str: " << str << endl;
        rem_dup_str_buffer(str);
        cout << "after removing duplicate chars: " << str << endl;
        return 0;
}
*/

int main()
{
	int i,c=0,n,len,len2,x;
	char a[100],str[100];
	cin>>a;
	
	cin>>n;
	len=strlen(a);
	sort(a,a+len);

	
	for(i=1;i<=n;i++)
	{
		cin>>str;
		
		len2=strlen(str);
		sort(str,str+len);
		rem_dup_str_buffer(str);
		//sort(str,str+len);
		//cout<<str;
		//x=IsSubString(a,str);
		//ncskcout<<x;
		if(IsSubString(a,str)==0 || strcmp(a,str)==0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;	
		//if(strcmp(a,str)==0)
	}
	
	
	return 0;
}
