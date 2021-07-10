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
#define ll long long int

void solve(){
    // The first line contains two integers n (1≤n≤3⋅105) and k (1≤k≤n) — 
    // the length of the strip of land and the number of air conditioners respectively.
    ll n,k;
    cin>>n>>k;
    vector<ll> pos(k,-1),temp(k,-1),v(n,pow(10,10));
    for(ll i=0;i<k;i++) cin>>pos[i];
    for(ll i=0;i<k;i++) cin>>temp[i];
    for(ll i=0;i<k;i++){
        v[pos[i]-1]=temp[i];
    }
    vector<ll> pre(n,pow(10,10)),suf(n,pow(10,10));
    pre[0]=v[0];
    suf[n-1]=v[n-1];
    for(ll i=1;i<n;i++){
        pre[i]=min({pre[i],pre[i-1]+1,v[i]});
    }
    for(ll i=n-2;i>=0;i--){
        suf[i]=min({suf[i],suf[i+1]+1,v[i]});
    }
    // cout<<"v:\n";
    // for(auto it:v) cout<<it<<" ";
    // cout<<endl;
    // cout<<"pre:\n";
    // for(auto it:pre) cout<<it<<" ";
    // cout<<endl;
    // cout<<"suf:\n";
    // for(auto it:suf) cout<<it<<" ";
    // cout<<endl;
    vector<ll> ans(n,-1);
    for(ll i=0;i<n;i++) ans[i]=min(pre[i],suf[i]);
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}