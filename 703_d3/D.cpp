#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    map<ll,ll> mp;
    vector<ll> v(n+2,-1);
    for(ll i=0;i<n+2;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll sum=0;
    for(auto it:v) sum+=it;
    for(ll i=0;i<n+2;i++){
        //  assume x=v[i]
        if((sum-v[i])%2==0){
            ll x=v[i];
            ll el= (sum-v[i])/2;
            if(el==x && mp[x]<=1) continue;
            if(mp.find(el)!=mp.end()){
                vector<ll> ans;
                bool xrem=false,elrem=false;
                for(ll i=0;i<n+2;i++){
                    if(v[i]==x && !xrem){
                        xrem=true;
                    }
                    else if(v[i]==el && !elrem){
                        elrem=true;
                    }
                    else{
                        ans.pb(v[i]);
                    }
                }
                sort(ans.begin(),ans.end());
                for(auto it:ans) cout<<it<<" ";
                cout<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}