#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<string>
#define ull unsigned long long int
#define minPqVec priority_queue<string, vector<string>, greater<string>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll n,k=0;
    cin>>n;
    pll *ar=new pll[n]();
    for(ll i=0;i<n;i++) cin>>ar[i].first,ar[i].second=i;
    sort(ar,ar+n);
    set<pll> dq;
    for(ll i=0;i<n;i++) if(ar[i].first) dq.insert(ar[i]);
    vector<pll> ans;       //  {p1,p2}
    while (dq.size()>1){
        pll p1=*dq.rbegin();dq.erase(*dq.rbegin());
        pll p2=*dq.begin();dq.erase(dq.begin());
        ans.push_back({p1.second+1,p2.second+1});
        p1.first--,p2.first--;
        if(p1.first) dq.insert(p1);
        if(p2.first) dq.insert(p2); 
    }
    cout<<ans.size()<<endl;
    for(auto it:ans) cout<<min(it.first,it.second)<<" "<<max(it.first,it.second)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while (t--) solve();
}