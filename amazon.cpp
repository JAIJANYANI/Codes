#include<iostream>
using namespace std;
int gcdfx (int, int);
int main()
{
	

unsigned long long int A[1000];
char Q[1000][1000];
int i,j,n,q;
cin>>n;
for(i=0;i<n;i++)
{3 cin>>A[i];
}
cin>>q;
for(i=0;i<q;i++)
{
	for(j=0;j<3;j++)	
	cin>>Q[i][j];
}


return 0;
}

int gcdfx ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

