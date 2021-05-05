#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define pii pair<int, int>
#define mll map<ll, ll>
#define v vector
#define mod 1000000007



void solve(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    else if(n==2){
        cout<<-1<<endl;
        return;
    }
    v<v<int>> dp(n,v<int>(n,0));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) dp[i][j] = n*i+j+1;
    // for(auto it:dp){
    //     for(auto it1:it) cout<<it1<<" ";
    //     cout<<endl;
    // }
    // cout<<"hi\n";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j+=2){
            int tmp=dp[i][j];
            dp[i][j]=dp[i+1][j];
            dp[i+1][j]=tmp;
        }
    }
    for(auto it:dp){
        for(auto it1:it) cout<<it1<<" ";
        cout<<endl;
    }
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