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

void dfs(ll pos,vector<vector<ll>> &edges,stack<ll> &stk,vector<bool> &vis){
    for(ll i=0;i<edges[pos].size();i++){
        if(!vis[edges[pos][i]]){
            vis[edges[pos][i]]=true;
            dfs(edges[pos][i],edges,stk,vis);
        }
    }
    stk.push(pos);
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> ar(n,-1);
    for(ll i=0;i<n;i++) cin>>ar[i];
    vector<vector<ll>> edges(n+1,vector<ll>());
    for(ll i=0;i<n-1;i++) edges[i].push_back(i+1);
    for(ll i=0;i<n;i++){
        if(!ar[i]) edges[i].push_back(n);
        else edges[n].push_back(i);
    }
    // doing top sort
    vector<bool> vis(n+1,false);
    stack<ll> stk;
    for(ll i=0;i<=n;i++){
        if(!vis[i]){
            vis[i]=true;
            dfs(i,edges,stk,vis);
        }
    }
    vector<ll> ans;
    while (stk.size()){
        ans.push_back(stk.top());
        stk.pop();
    }
    for(auto it:ans) cout<<it+1<<" ";
    cout<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}