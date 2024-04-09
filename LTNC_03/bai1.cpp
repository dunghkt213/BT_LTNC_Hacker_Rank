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
void solve()
{
    getline(cin,n);
    getline(cin,m);
    for(int i=0;i<n.size();i++)
    {
        if(n[i]!=' ')
        {
            if('a'<=n[i] && n[i]<='z')
            {

                a+=n[i];
            }
            else a+=n[i]+32;
        }
    }
    for(int i=0;i<m.size();i++)
    {
        if(m[i]!=' ')
        {
            if('a'<=m[i] && m[i]<='z')
            {

                b+=m[i];
            }
            else b+=m[i]+32;
        }
    }
    cout<<a.size()<<" "<<b.size()<<"\n"<<a+b<<"\n"<<b[0]+a.substr(1)<<" "<<a[0]+b.substr(1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
//x1-x2=v2-v1
