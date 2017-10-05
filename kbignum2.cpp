#include<bits/stdc++.h>
using namespace std;

int merge(unsigned long long int int1,unsigned long long int int2)
{
   unsigned long long int int2_copy = int2;
    do
    {
        int1 *= 10;
        int2_copy /= 10;
    } while (int2_copy);

	
    return int1 + int2;
}
int main()
{
	 unsigned long long int t,a,n,n1,end,i,j,k,arr[10005],b[10005],test,mod,ans;
	 unsigned long long int x,y,z,NA;
	 unsigned long long int m;
	cin>>t;
	while(t--)
	{
		NA=10005;
		cin>>a>>n>>m;
		arr[0]=a%m;
		for( i=1;i<10005;i++){
		
		arr[i]=(merge(arr[i-1],a))%m;
		//cout<<arr[i]<<"\t";	
	
	}
	for( i=0;i<NA;i++){
		
		b[i]=arr[i];
		//cout<<b[i]<<"\t";
		}
		
	
	for (i = 0; i < NA; i++) {
      for (j = i + 1; j < NA;) {
         if (b[j] == b[i]) {
            for (k = j; k < NA; k++) {
               b[k] = b[k + 1];
            }
            NA--;
         } else
            j++;
      }
   }
	/*for( i=0;i<NA;i++){
		
		
		cout<<b[i]<<"\t";
	
	}*/
//	cout<<endl<<NA<<"\t";
	//cout<<endl<<test<<endl;
	n=n-1;
	mod=n%NA;
	ans=b[mod];
	//cout<<endl<<n<<"\t"<<mod<<"\t"<<ans<<"\t";
	cout<<ans<<endl;
	
			

				
}
		return 0;
	}
	

