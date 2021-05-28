#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ll long long int
#define ull unsigned long long int

void solve(){
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(n==1 || v[0]>0){
        cout<<1<<endl;
        return;
    }
    // can't take more than 1 +ve no.
    // will take the min +ve number (if can be taken)
    // maintain min difference btwn 2 -ve nos 
    ll dif=INT_MAX;
    vector<ll> ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]>0){
            if(v[i]<=dif) ans.push_back(v[i]);
            break;
        }
        else{
            dif=min(dif,(ll)(v[i]-v[i-1]));
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
