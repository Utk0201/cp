#include <bits/stdc++.h>
using namespace std;

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
#define mod 1000000007

void solve(){
    ll x,y,rmax=1,ans=0;
    cin>>x>>y;
    for(ll i=1;i<=pow(10,5) && (i*(i+1)<x);i++) rmax=i;
    rmax=min(rmax,y-1);     //  remainder can't be greater than 'b'
    for(ll rem=1;rem<=rmax;rem++){
        ll hi = min(y,(x-rem)/rem),lo=rem+1;
        ans+= hi-lo+1;
    }
    cout<<max(0LL,ans)<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}
