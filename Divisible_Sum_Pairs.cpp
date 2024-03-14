#include <bits/stdc++.h>
#define ll long long
#define db double
#define pll pair<ll,ll>
#define fi first
#define sc second
#define pb push_back
#define INF (ll)1e9
#define N (ll) 5e6
#define MOD (ll)(1e9+7)
#define mp make_pair
using namespace std;
//bool check(ll n)
//{
//    for(int i=2;i*i<n;i++)
//    {
//        if(n%i==0)return 0;
//    }
//    return 1;
//}
void solve()
{
    ll a[100000];
    ll n,k;
    cin>>n>>k;
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if( (a[i]+a[j])%k==0) cnt++;
        }
    }
    cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
//x1-x2=v2-v1
