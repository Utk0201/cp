#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define ull unsigned long long int
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll n,mn=INT_MAX;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    mn=v[0];
    for(auto it:v) mn=mn&it;
    cout<<mn<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}