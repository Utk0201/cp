#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int
using namespace std;

void solve(){
    ll n,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        sum+=tmp;
    }
    if(sum==n){
        cout<<0<<endl;
        return;
    }
    if(sum<n){
        cout<<1<<endl;
        return;
    }
    cout<<(sum-n)<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}