
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

set<string> powersOf2;

ll minOp(string &p2,string &n){
    ll i=0,ans=0,j;
    for(j=0;j<n.size() && i<p2.size();j++){
        if(p2[i]==n[j]) i++;
        else ans++;
    }
    if(i==p2.size()) return ans+n.size()-j;
    return ans+p2.size()-i;
}

void solve(){
    ll n,ans=11;
    cin>>n;
    string sn=to_string(n);
    for(auto it:powersOf2){
        ll tmp=minOp(it,sn);
        if(tmp<ans){
            ans=tmp;
        }
    }
    cout<<ans<<endl;
}

int main() {
    powersOf2.clear();
    for(ll i=0;i<=60;i++) powersOf2.insert(to_string(1LL<<i));
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}