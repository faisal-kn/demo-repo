#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
ll m = 10000009;
#define TIME cerr<<"Time Taken:"<<(float)clock()/CLOCKS_PER_SEC*1000<<"ms"<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve();

int main()
{
    fast
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}

void solve()
{
    ll n,m,x,rchef;
    cin>>n>>m;
    vector<ll> rn(n);
    vector<ll> stu(50000);
    for(ll i=0;i<n;i++){
        cin>>rn[i];
    }
    vector<ll> rm(m);
    for(ll i=0;i<m;i++){
        cin>>rm[i];
        if(i==0)
        rchef=rm[i];
    }
    vector<vector<ll>> a(m);
    for(ll i=0;i<n;i++){
        cin>>x;
        a[i]=vector<ll>(x);
        for(ll j=0;j<a[i].size();j++){
            cin>>a[i][j];
        }
    }
    
}