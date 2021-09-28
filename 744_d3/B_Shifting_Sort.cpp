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
    ll n;
    cin>>n;
    ll *ar=new ll[n](),*sortedAr=new ll[n]();
    for(ll i=0;i<n;i++) cin>>ar[i],sortedAr[i]=ar[i];
    sort(sortedAr,sortedAr+n);
    //debug
    // for(ll i=0;i<n;i++) cout<<sortedAr[i]<<" ";
    // cout<<endl;
    //debug
    ll i=0,j=0;
    vector<pair<pll,ll>> ans;   //  {{st,en},d}
    // ar[0]~ar[i-1] is sorted
    // fill ar[i] 
    for(;j<n;j++){
        // cout<<sortedAr[i]<<" and "<<ar[j]<<endl;
        if(ar[j]==sortedAr[i]){
            if(i==j){
                i++;
                // cout<<"now "<<i<<" "<<j<<endl;
                continue;
            }
            // shift ar[i]~ar[j] by (j-i) units
            ans.push_back({{i+1,j+1},j-i});
            for(ll it=j;it>i;it--) ar[it]=ar[it-1];
            ar[i]=sortedAr[i];
            i++,j=i-1;
    //debug
    // cout<<"position "<<i-1<<" is sorted\n";
    // for(ll i=0;i<n;i++) cout<<ar[i]<<" ";
    // cout<<endl;
    //debug
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while (t--) solve();
}
/*
2 4 1 3
2 1 3 4
2 3 1 4
1 2 3 4

Observation:
2 4 1 3
1 2 3 4

*/