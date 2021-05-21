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
    ll n;
    cin>>n;
    int first=-1,last=-1;
    bool sorted=true;
    for(int i=0;i<n;i++){
        if(i==0) cin>>first;
        else if(i==n-1) cin>>last;
        else{
            int x;
            cin>>x;
            if(x!=i+1) sorted=false;
        }
    }
    if(last==1 && first==n){
        cout<<3<<endl;
        return;
    }
    if(sorted && first==1 && last==n){
        cout<<0<<endl;
        return;
    }
    if(first==1 && last==n){
        cout<<1<<endl;
    }
    else if(first!=1 && last!=n){
        cout<<2<<endl;
    }
    else cout<<1<<endl;
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
