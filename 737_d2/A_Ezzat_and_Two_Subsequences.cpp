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
    cout<<fixed<<setprecision(9);
    int n;
    cin >> n;
    vector<ll> v(n, -1.0);
    for (int i = 0; i < n; i++) cin >> v[i];
    ll mx=v[0],sum=0;
    for(auto it:v) sum+=it,mx=max(mx,it);
    cout<<(1.0*(sum-mx)/(n-1.0) + mx)<<endl;
}

int main() {
    ll t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}