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
    int k;
    int n;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    k=k%26;
    for(int i=0;i<n;i++)
    {
        int m=k;
        if(('a'<=s[i] && s[i]<='z') )
        {
            if(s[i]+m>'z')
            {
                m-=(int)'z'-(int)s[i];
                m=m%26;
                m--;
                s[i]=(int)'a';
            }
            s[i]=s[i]+m;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            if(s[i]+m>'Z')
            {
                m-=(int)'Z'-(int)s[i];
                m=m%26;
                m--;
                s[i]=(int)'A';
            }
            s[i]=s[i]+m;
        }
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

