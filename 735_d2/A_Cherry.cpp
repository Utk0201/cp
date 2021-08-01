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
#define ll long long

void solve(){
    ll n,ans=1;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=1;i<n-1;i++) ans=max({ans,v[i]*v[i-1],v[i]*v[i+1]});
    ans=max(ans,v[0]*v[1]);
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}