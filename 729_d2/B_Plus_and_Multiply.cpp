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
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        cout<<"Yes\n";
        return;
    }
    // check for  a==1 or b==1
    if(b==1){
        cout<<"Yes\n";
        return;
    }
    if(a==1){
        if((n-1)%b==0) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }  
    for(ll i=0;(n-(ll)pow(a,i))>=0;i++){
        if( (n-(ll)pow(a,i))%b==0){
            cout<<"Yes\n";
            return;
        }
    }         
    cout<<"No\n";
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
