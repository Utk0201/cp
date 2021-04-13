#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

ll max(ll x,ll y){
    return x>y?x:y;
}

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    while(q--){
        ll x,idx=-1;
        cin>>x;
        for(ll i=0;i<v.size();i++){
            if(v[i]==x){
                idx=i;
                break;
            }
        }
        cout<<idx+1<<" ";
        for(ll i=idx-1;i>=0;i--) v[i+1]=v[i];
        v[0]=x;
    }
    cout<<endl;
}

int main(){
    ll t=1;
//    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

