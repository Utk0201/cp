#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ll long long int
#define ull unsigned long long int

void solve(){
    ll n;
    cin>>n;
    priority_queue<ll> pq;
    for(int i=0;i<2*n;i++){
        ll x;
        cin>>x;
        pq.push(x);
    }
    vector<int> ans(2*n,-1);
    // even index has largest elements
    for(int i=0;i<2*n;i+=2){
        ans[i]=pq.top();
        pq.pop();
    } 
    for(int i=1;i<2*n;i+=2){
        ans[i]=pq.top();
        pq.pop();
    } 
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
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