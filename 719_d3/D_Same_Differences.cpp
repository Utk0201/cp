#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define pii pair<int, int>
#define mll map<ll, ll>
#define v vector
#define mod 1000000007



void solve(){
    ll n,ans=0;
    cin>>n;
    v<ll> ar;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        int cur=x-i;
        if(mp.find(cur)!=mp.end()) ans+=mp[cur];
        mp[x-i]++;
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}