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
    for(int i=0;i<n-1;i++) if(v[i+1]!=v[i]){
        cout<<n-i-1<<endl;
        return;
    }
    cout<<0<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
