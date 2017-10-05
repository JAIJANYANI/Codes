#include <iostream>
using namespace std;
int main()
{
    unsigned long long int array[1005],x[1005],polysum[1005];
    int i, num, power,j;
    float query;
 
    
    cin>>num;
    
     for (i = num; i >=0; i--)
    {
        cin>>array[i];
    }
    cin>>query;
    for(i=0;i<query;i++)
    cin>>x[i];
    
	for(j=0;j<query;j++){
		polysum[j] = array[0];
    for (i = 1; i <= num; i++)
    {
        polysum[j] = (polysum[j] * x[j] + array[i])%786433;
    }
}
	for(j=0;j<query;j++){
	
   cout<<polysum[j]<<endl;
}
return 0;
}
