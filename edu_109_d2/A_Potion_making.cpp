#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define mod 1000000007
#define pii pair<int, int>
#define ll long long

void solve(){
    ll x;
    cin>>x;
    ll y=100;
    while(__gcd(x,y)!=1){
        ll tmp=x;
        x=x/__gcd(x,y);
        y=y/__gcd(tmp,y);
    }
    cout<<max(x,y)<<endl;
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
