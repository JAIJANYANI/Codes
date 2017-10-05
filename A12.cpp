#include <bits/stdc++.h>
using namespace std;
#define MAXN 30500
 
int tc;
int n, x, k;
int f[MAXN];
 
int main() {
    scanf("%i", &tc);
    while (tc--) {
        scanf("%i%i", &n, &k);
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for(int i=0; i<n; ++i) {
            scanf("%i", &x);
            for(int j=MAXN - 1; j>=0; --j) if (f[j]) f[j + x] = 1;
        }
        if (f[k]) printf("Yes\n"); else printf("No\n");
    }
    return 0;
} 
