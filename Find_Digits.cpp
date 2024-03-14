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
void solve(ll n)
{
//    cin>>n;
    int cnt=0;
    ll m=n;
    while(m>0)
    {
        ll tmp =m%10;
        if(tmp!=0 && n%tmp==0) cnt++;
        m=m/10;
    }
    cout<<cnt<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
//    cout<<t<<"*";
    while(t>0)
    {
        t--;
        ll n;
        cin>>n;
        solve(n);
    }

}
