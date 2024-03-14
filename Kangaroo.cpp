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
void solve()
{
    ll x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    for(int i=1;i<=1e7;i++)
    {
        if(x1+v1*i== x2 + v2*i)
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
//    cin>>t;
//    cout<<t<<"*";
//    while(t>0)
//    {
//        t--;
//        ll n;
//        cin>>n;
//        solve(n);
//    }
    solve();
}
//x1-x2=v2-v1
