#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll> ar;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ar.pb(x);
    }
    ll ans=-1;
    if(ar[0]!=ar[1]){
        if(n>2){
            if(ar[0]==ar[2]) ans=2;
            else ans=1;
        }
        else{
            ans=1;
        }
        cout<<ans<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(ar[i]!=ar[i-1]){
            cout<<i+1<<endl;
            break;
        }
    }
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