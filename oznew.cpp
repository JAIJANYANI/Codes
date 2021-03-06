#include<map>
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
 
typedef long long LL;
 
int T, N, K, A[100010];
 
LL calc(int X, int mask) {
    map<int,int> mp;
    LL ans = 0;
    mp[0] = 1;
 
    int sum = 0;
 
    for (int i=0; i<N; i++) {
        sum ^= A[i];
        ans += mp[(sum ^ X) & mask];
        mp[sum & mask]++;
    }
    return ans;
}
 
int main() {
    scanf("%d", &T);
    for (;T--;) {
        scanf("%d%d", &N, &K);
        for (int i=0; i<N; i++) scanf("%d", A+i);
        
        LL ans = 0;
        int X = 0, mask = 0;
        for (int i=31; i>=0; i--) {
            mask |= 1<<i;
            if (K & (1<<i)) {
                ans += calc(X, mask);
                X |= 1<<i;
            }
        }
 
        printf("%lld\n", ans);
    }
 
    return 0;
}
