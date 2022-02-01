#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int

void solve(){
    ll n,k,ans=0;
    unordered_map<ll,ll> mp;
    cin>>n>>k;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]%k]++;
    }
    for(ll i=1;i<(k+1)/2;i++) ans+=max(mp[i],mp[k-i]);
    if(mp[0]) ans++;
    if(k%2==0 && mp[k/2]) ans++;
    cout<<ans<<endl;
}

int main() {
    solve();
    return 0;
}
