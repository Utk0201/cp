#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
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
    ll a=11,b=111;
    for(int i=0;i<11;i++) if(n-i*111>=0 && (n-i*111)%11==0){
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