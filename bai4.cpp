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
    cin>>n;
    if(n==1) cout<<"one";
    else if(n==2) cout<<"two";
    else if(n==3) cout<<"three";
    else if(n==4) cout<<"four";
    else if(n==5) cout<<"five";
    else if(n==6) cout<<"six";
    else if(n==7) cout<<"seven";
    else if(n==8) cout<<"eight";
    else if(n==9) cout<<"nine";
    else cout<<"Greater than 9";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

