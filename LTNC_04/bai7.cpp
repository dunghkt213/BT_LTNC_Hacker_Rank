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
int n,m;
int Dx[]={1,1,1};
int Dy[]={-1,1,0};
bool check[2005][2005];
char a[2005][2005];
void BFS(int x,int y)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    check[x][y]=1;
    while(!q.empty())
    {
        int i=q.front().fi;
        int j=q.front().sc;
        check[i][j]=1;
        q.pop();
        cout<<i<<" "<<j<<"\n";
        if(i==5) exit(0);

        for(int h=0;h<=2;h++)
        {
            int t=i+Dx[h];
            int k=j+Dy[h];
            if(t>0 && k>0 && t<=n && k<=m && check[t][k]==0 &&a[t][k]!='R' )
            {
                q.push({t,k});
            }
        }
    }
}
void solve()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x,y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='Y')
            {
                x=i;
                y=j;
            }
        }
    }
    BFS(x,y);
    for(int i=1;i<=m;i++)
    {
        if(check[n][i]==1)
        {
            cout<<"YES";
            return;
        }

    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//        {
//            cout<<check[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    cout<<"NO";


}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}

