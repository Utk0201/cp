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
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long

void solve() {
    ll n,k,segs=0;
    cin>>n>>k;
    vector<ll> v(n,-1),sortedV;
    for(ll i=0;i<n;i++) cin>>v[i];
    sortedV=v;
    sort(sortedV.begin(),sortedV.end());
    unordered_map<int,int> mp;  //  maps from v[i] to i
    for(auto i=0;i<sortedV.size();i++) mp[sortedV[i]]=i;
    for(ll i=0;i<n;){
        ll j=mp[v[i]];
        while (i<n && j<n && sortedV[j]==v[i]) i++,j++;
        segs++;
    }
    if(segs<=k) cout<<"Yes\n";
    else cout<<"No\n";
}

int main() {
    ll t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}