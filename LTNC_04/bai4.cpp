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
    vector<int>a[100000];
    int n,q;
    int k;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=1;j<=k;j++)
        {
            int u;
            cin>>u;
            a[i].pb(u);
        }
    }
    for(int i=1;i<=q;i++)
    {
        int t,h;
        cin>>t>>h;
        cout<<a[t][h]<<"\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

