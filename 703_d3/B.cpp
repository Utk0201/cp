#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<string> ar;
    for(ll i=0;i<n;i++){
        string t;
        cin>>t;
        ar.pb(t);
    }
    vector<pair<ll,ll>> pt;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(ar[i][j]=='*') pt.pb(make_pair(i,j));
        }
    }
    pair<ll,ll> p1,p2;
    p1.first=pt[0].first;
    p1.second=pt[1].second;
    p2.first=pt[1].first;
    p2.second=pt[0].second;
    pt.pb(p1);
    pt.pb(p2);
    //edge cases
    if(pt[2].first==pt[1].first){
        //  4 points lie on same row
        if(pt[2].first+1<n) pt[2].first++,pt[3].first++;
        else pt[2].first--,pt[3].first--;
    }
    else if(pt[3].second==pt[1].second){
        //  4 points lie on same col
        if(pt[2].second+1<n) pt[2].second++,pt[3].second++;
        else pt[2].second--,pt[3].second--;
    }
    //edge cases
    for(auto it:pt) ar[it.first][it.second]='*';
    for(auto it:ar){
        for(auto it1:it) cout<<it1;
        cout<<endl;
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