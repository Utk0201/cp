#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define pii pair<int, int>
#define mll map<ll, ll>
#define v vector
#define mod 1000000007

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<ll> pre(n,0),suf(n,0);
    //  pre[i] stores no. of gaps in s[0] s[1] .. s[i-1]
    //  vice versa for suf
    ll rHop=0,lHop=0;
    if(s[0]=='*') lHop++;
    for(ll i=1;i<n;i++){
        if(s[i]=='*'){
            lHop++;
            pre[i]=pre[i-1];
        }
        else{
            pre[i]=(lHop+pre[i-1]);
        }
    }    
    if(s[n-1]=='*') rHop++;
    for(ll i=n-2;i>=0;i--){
        if(s[i]=='*'){
            rHop++;
            suf[i]=suf[i+1];
        }
        else{
            suf[i]=(suf[i+1]+rHop);
        }
    }
    ll ans=pow(10,18);
    for(ll i=0;i<n-1;i++){
        ans=min(ans,(pre[i]+suf[i+1]));
    }
    cout<<ans<<endl;
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