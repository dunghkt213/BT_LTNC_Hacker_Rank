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
bool check(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
void solve()
{
    int n;
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        string s;
        cin>>s;
        if(check(s)==1)
        {
            cout<<"-1\n";
            continue;
        }
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                string s1=s.substr(0,i)+s.substr(i+1,s.size()-i-1);
                if(check(s1)==1)
                {
                    cout<<i<<"\n";
                }
                else
                {
                    cout<<j<<"\n";
                }
                break;
            }
            i++;
            j--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

