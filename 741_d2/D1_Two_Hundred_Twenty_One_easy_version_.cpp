#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll *pre=new ll[n];
    pre[0]=(s[0]=='+')?1:-1;
    for(ll i=1;i<n;i++){
        pre[i] = ((s[i]=='+') ? 1:-1);
        pre[i]*= ((i&1)?-1:1);
        if(i) pre[i]+=pre[i-1];
    }
    while (q--){
        ll x,y;
        cin>>x>>y;
        x--,y--;
        ll sum=pre[y];
        if(x) sum-=pre[x-1];
        if(sum==0) cout<<0<<endl;
        else if((y-x+1)&1) cout<<1<<endl;
        else cout<<2<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}