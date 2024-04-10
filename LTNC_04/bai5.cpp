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
    int n;
    int a[100000];
    int b[100000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=1;
    }
    for(int i=1;i<=n+1;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+2);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<b[i];
            return;
        }
    }
    cout<<b[n+1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        solve();
}

