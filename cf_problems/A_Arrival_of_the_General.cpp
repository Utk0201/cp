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

void solve(){
    ll n,mx=INT_MIN,mn=INT_MAX,p1=0,p2=0;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<v.size();i++){
        if(v[i]>mx){
            mx=v[i];
            p1=i;
        }
        if(v[i]<=mn){
            mn=v[i];
            p2=i;
        }
    }
    if(p1<p2){
        cout<<(p1+n-1-p2)<<endl;
    }
    else{
        cout<<(p1+n-2-p2)<<endl;
    }
}

int main()
{
    ll t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}