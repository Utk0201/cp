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
    ll n,ans=0;
    cin>>n;
    vector<ll> ar(n,-1);
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<vector<ll>> dp(n+1,vector<ll>(n+1,-1));  //  dp[i][j] is the max health possible if first 'i' drinks are given and I drank 
    // 'j' drinks
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(i==j && i) dp[i][j]= (dp[i-1][j-1]>=0)?max(-1ll,dp[i-1][j-1]+ar[i-1]):-1;
            else if(i && j){
                dp[i][j]=max(-1ll,dp[i-1][j]);
                if(dp[i-1][j-1]>=0) dp[i][j]=max(dp[i][j],ar[i-1]+dp[i-1][j-1]);    //  I can drink this only if my health >=0 till (i-1)
            }
            else dp[i][j]=0;
        }
    }
    for(int j=n;j>=0;j--) for(int i=0;i<=n;i++) if(i>=j && dp[i][j]>=0){
        cout<<j<<endl;
        return;
    } 
}

int main()
{
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}