#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int
using namespace std;

void solve(){
    ll n,odds=0,evs=0;;
    cin>>n;
    for(ll i=0;i<2*n;i++){
        ll x;
        cin>>x;
        if(x%2) odds++;
        else evs++;
    }
    if(odds==evs) cout<<"Yes\n";
    else cout<<"No\n";
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
