#include <iostream>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }
int max(int a, int b, int c) { return max(max(a, b), c); }
int maxCrossingSum(int arr[], int l, int m, int h,int inmin)
{
	int i;
	for(i=l;i<h;i++)
	{
	if(arr[i]<inmin)
	inmin=arr[i];
	}
long long int sum = 0;
long long int left_sum = INT_MIN;
for (int i = m; i >= l; i--)
{
sum = sum + arr[i];
if (sum > left_sum)
left_sum = sum;
}
sum = 0;
long long int right_sum = INT_MIN;
for (int i = m+1; i <= h; i++)
{
sum = sum + arr[i];
if (sum > right_sum)
right_sum = sum;
}
return left_sum + right_sum - inmin;
}
int maxSubArraySum(int arr[], int l, int h,int inmin)
{
if (l == h)
return arr[l];
int m = (l + h)/2;
return max(maxSubArraySum(arr, l, m,inmin),
maxSubArraySum(arr, m+1, h,inmin),
maxCrossingSum(arr, l, m, h,inmin));
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	
int no,f,i,arr[100];
int inmin=0;
cin>>no;
for(f=0;f<no;f++){

cin>>arr[f];
//if(arr[f]<inmin)
//inmin=arr[f];
}
int n=no;
int max_sum = maxSubArraySum(arr, 0, n-1,inmin);
cout<<max_sum<<endl;
}
return 0;
}

