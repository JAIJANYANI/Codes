#include<bits/stdc++.h>
//#define DEBUG
//#ifdef DEBUG
//code to debug
//#endif
//#undef DEBUG
using namespace std;
 
const int mod=1e9+7,maxn=100005,ln=17;
#define F(i,p,n) for(int i=p;i<n;i++)
#define I(i,p,q) for(int i=p;i>=q;i--)
#define Ss(x) scanf("%s",x)
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
//#define getcx getchar_unlocked
#define getcx getchar
/*inline void S(int& n)
{
    n=0; int ch = getcx(); int sign = 1;
    while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getcx(); }
    while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getcx(); }
    n = n * sign;
}*/
#define Ps(x) printf("%d  ",x)
#define P(x) printf("%d\n",x)
typedef long long int LL;
#define modulo(x,y,z) (x+y)<0?x+y+z:((x+y>=z)?x+y-z:x+y)
#define Debug(x) cout << #x << "=" << x << endl
#define Debugarr(x,n) cout<<"array "<<#x<<":"<<endl; F(i,0,n) cout<<i<<". "<<x[i]<<endl; cout<<endl
#define Debugarr2(x,m,n) cout<<"array "<<#x<<":"<<endl; F(i,0,m) {F(j,0,n) cout<<x[i][j]<<" "; cout<<endl;} cout<<endl
#define pii pair<LL,int>
#define Fi first
#define Se second
#define chk(x,n) (x[n>>5]&(1<<(n&31))) //unsigned int
#define set(x,n) (x[n>>5]|=(1<<(n&31)))//32 bit
const int shift=30,etf=mod-1;
 
const LL inf=(LL)1e15;
 
const double PI=(double)3.141592653589793238;
 
LL dp[105][maxn],sum[105][maxn],fact[105],ifact[105],a[maxn];
 
LL _pow(LL x,LL y)
{
    if(!y)
        return 1;
    if(y==1)
        return x;
    if(y==2)
        return (x*x)%mod;
    if(y&1)
        return (x*_pow(x,y-1))%mod;
    else
        return (_pow(_pow(x,y/2),2))%mod;
}
 
void pre()
{
    fact[0]=1;
    F(i,1,105)
    {
        fact[i]=(i*fact[i-1])%mod;
    }
 
    ifact[104]=_pow(fact[104],mod-2);
    I(i,103,0)
    {
        ifact[i]=(ifact[i+1]*(i+1))%mod;
    }
    //Debug(ifact[0]);
}
 
int main()
{
    pre();
    int t;
    S(t);
    while(t--)
    {
        LL ans=0;
        int n,k;
        cin>>n>>k;
        F(i,1,n+1)
        cin>>a[i];
 
        sort(a+1,a+n+1);
 
        F(i,1,n+1)
        {
            dp[0][i]=1;
            F(j,1,k+1)
            {
                dp[j][i]=(dp[j-1][i]*a[i])%mod;
            }
            F(j,0,k+1)
            {
                sum[j][i]=(dp[j][i]+sum[j][i-1])%mod;
            }
        }
 
        //Debugarr2(dp,k+1,n+1);
        //Debugarr2(sum,k+1,n+1);
 
        F(i,2,n+1)
        {
            LL temp=0;
            F(j,0,k+1)
            {
                int sign=1;
                if(j&1)
                    sign=-1;
                temp=(temp+sign*((((fact[k]*ifact[j])%mod*ifact[k-j])%mod*dp[k-j][i])%mod*sum[j][i-1])%mod+mod)%mod;
            }
            ans=(ans+temp+mod)%mod;
        }
 
        cout<<(2*ans)%mod<<endl;
    }
    return 0;
}
 


