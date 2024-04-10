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
int a[100000];
int b[10000];
void solve()
{
   int n;
   cin>>n;
   int Max=0;
   for(int i=1;i<=n;i++)
   {
        cin>>a[i];
        b[a[i]]++;
        Max=max(Max,b[a[i]]);
   }
   cout<<n-Max;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

