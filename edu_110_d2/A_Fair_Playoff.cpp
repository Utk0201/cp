#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(){
    vector<int> v;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int p1=max(v[0],v[1]),p2=max(v[2],v[3]);
    sort(v.begin(),v.end());
    if(min(p1,p2)==v[2] && max(p1,p2)==v[3]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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