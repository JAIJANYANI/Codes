#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int i,j,k,n,N,L,R,flag,count=0,loop;
    long long int a[100000];
    cin>>n>>L>>R;
    loop=R-L+1;
    
    for(i=0;i<n;++i)
        cin>>a[i];
        
    for(i=0;i<n;++i)
        for(j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;++k)
                    a[k]=a[k+1];
                    
                --n;
            }
            else
                ++j;
        }
    sort(a,a+n);
    /*cout<<"\n";
    for(i=0;i<n;++i)
        cout<<a[i]<<" ";*/
 	
 	
 	/*for(i=n;i>0;i++){
	 
 	if(L>(a[i]-a[i-1]) && L<(a[i]+a[i-1])){
	 
 	count++;
 	L++;
 	break;
 }}*/
 	
 	
 	
 	
 	 flag=0;
 	while(loop--){
	 for(i=n;i>0;i--){
	 
 	if(L>(a[i]-a[i-1]) && L<(a[i]+a[i-1]))
 	flag=1;
 	//cout<<i<<L<<"\t";
 	}
 	if(flag==1)
 	cout<<L;
 	count++;
 	L++;
	 }
 	cout<<endl<<count-1<<endl;
    return 0;
} 
