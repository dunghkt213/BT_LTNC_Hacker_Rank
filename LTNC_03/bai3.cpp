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
    string s;
    cin>>s;
    if(s[s.size()-2]=='P')
    {
        s[0]=s[0]+1;
        if(s[1]=='8') s[1]='0',s[0]='2';
        else if (s[1]=='9') s[1]='1',s[0]='2';
        else s[1]=s[1]+2;
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    for(int i=0;i<s.size()-2;i++)
    {
        cout<<s[i];
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

