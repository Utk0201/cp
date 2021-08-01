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
    ll n,k,ans=INT_MIN;
    cin>>n>>k;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=max((ll)0,n-202);i<n-1;i++) for(ll j=i+1;j<n;j++) ans=max(ans,(i+1)*(j+1)-k*(v[i]|v[j]));
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