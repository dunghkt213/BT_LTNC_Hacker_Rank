#include <iostream>
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
string a,b,n,m;
int solve()
{
    int n,p;
    cin>>n>>p;
    if(n%2==0)n++;
    return min(p/2,(n-p)/2);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
//x1-x2=v2-v1
