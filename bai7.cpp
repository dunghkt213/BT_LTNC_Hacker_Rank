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
    ll n;
    ll a[10000];
    cin>>n;
    ll duong =0;
    ll am=0;
    ll zero=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>0)duong ++;
        else if(a[i]<0) am++;
        else zero++;
    }
    cout<<fixed<<setprecision(6)<<(db)duong/n;
    cout<<"\n"<<(db)am/n<<"\n"<<(db)zero/n;
//cout<<duong<<" "<<am<<" "<<zero;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

