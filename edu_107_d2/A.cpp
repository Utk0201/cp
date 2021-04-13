#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll up=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==3 || x==1) up++;
    }
    cout<<up<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}