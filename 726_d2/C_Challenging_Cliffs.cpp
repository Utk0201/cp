#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll idx1=-1,idx2=-1,dif=pow(10,9);
    for(ll i=0;i<n-1;i++){
        if(dif>v[i+1]-v[i]){
            dif=v[i+1]-v[i];
            idx1=i,idx2=i+1;
        }
    }
    vector<ll> ans1;
    ans1.push_back(v[idx1]);
    for(ll i=0;i<n;i++){
        if(i==idx1 || i==idx2) continue;
        ans1.push_back(v[i]);
    }
    ans1.push_back(v[idx2]);
    vector<ll> ans2;
    ans2.push_back(v[idx1]);
    for(ll i=idx1+2;i<n;i++) ans2.push_back(v[i]);
    for(ll i=0;i<idx1;i++) ans2.push_back(v[i]);
    ans2.push_back(v[idx2]);
    ll level1=0,level2=0;
    for(ll i=0;i<n-1;i++) if(ans1[i+1]>=ans1[i]) level1++;
    for(ll i=0;i<n-1;i++) if(ans2[i+1]>=ans2[i]) level2++;
    if(level1>level2) for(auto it:ans1) cout<<it<<" ";
    else for(auto it:ans2) cout<<it<<" ";
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