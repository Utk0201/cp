
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

void solve(vector<ll> &v){
    ll n;
    cin>>n;
    ll pos = lower_bound(v.begin(),v.end(),n)-v.begin();
    if(v[pos]+pos>=n && v[pos]-pos<=n){
        // ok
    }else pos--;
    // cout<<pos<<" is pos\n";
    // [v[pos-1],v[pos]]
    ll dif = v[pos]-v[pos-1];
    if(v[pos]-dif<=n && v[pos]>=n){
        ll col=pos;
        ll row=pos-(v[pos]-n);
        cout<<(row+1)<<" "<<(col+1)<<endl;
    }else{
        ll row=pos;
        ll col=pos-(n-v[pos]);
        cout<<(row+1)<<" "<<(col+1)<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    vector<ll> v;
    for(ll i=0;i<=100000;i++){
        v.push_back(1+i+i*i);
    }
    while (t--){
        solve(v);
    }
    return 0;
}