#include <iostream>
using namespace std;
 int max( int a,  int b) { return (a > b)? a : b; }
 int min( int a,  int b) { return (a > b)? b : a; }
 int max( int a,  int b,  int c) { return max(max(a, b), c); }
 int maxCrossingSum( int arr,   int l,   int m,   int h)
{
  int sum = 0;
 int x,y;
 int brr[100005];
int left_sum = -2749999;
for ( int i = m; i >= l; i--)
{
sum = sum + arr[i];
if (sum > left_sum){
left_sum = sum;
brr[i]=arr[i];
x=i;

}
}
sum = 0;
int right_sum = -2749999;
for ( int i = m+1; i <= h; i++)
{
sum = sum + arr[i];
if (sum > right_sum)
{
right_sum = sum;
brr[i]=arr[i];
y=i;
}

	
}
return left_sum + right_sum;
}
 int maxSubArraySum( int arr,  int l,   int h)
{
if (l == h)
return arr[l];
  int m = (l + h)/2;
return max(maxSubArraySum(arr, l, m),
maxSubArraySum(arr, m+1, h),
maxCrossingSum(arr, l, m, h));
}
int main()
{
	 int t,n;
	cin>>t;
	while(t--){
	
 int no,f,i;
int arr[100005];
cin>>no;
for(f=0;f<no;f++)
cin>>arr[f];
 int n=no;
 int max_sum = maxSubArraySum(arr, 0, n-1);
cout<<max_sum<<endl;
}
return 0;
}

