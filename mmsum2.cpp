#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t, i, n, a;
  for (scanf ("%d", &t); t--; ) {
    scanf ("%d", &n);
    long long int sum = 0, pre = 0, best = 0, inmin = 0;
    long long int largest = -1234567890;
    for (i = 0; i < n; i++) {
      scanf ("%d", &a);
      sum += a;
      
      if (a < inmin) inmin = a;
      if (sum < 0) {
        pre = max (sum - inmin, sum + pre);
        sum = 0;
        inmin = 0;
        
      }
      printf ("%d %lld %lld %lld\n", a, sum, inmin, pre);
      if (sum - inmin > best) best = sum - inmin;
      if (sum + pre > best) best = sum + pre;
      if (largest < a) largest = a;
    }
    printf ("%lld\n", largest < 0 ? largest : best);
  }
  return 0;
}
 
