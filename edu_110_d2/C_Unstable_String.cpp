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
    string s;
    cin>>s;
    ll ans=0,n=s.size();
    vector<vector<ll>> dp(2,vector<ll>(n,1));   //  dp[i][j] stores the number of beauty. substrings ending at 'j' if s[j]==i
    if(s[0]!='?'){
        dp[s[0]-'0'][0]=1;
        dp[1-(s[0]-'0')][0]=0;
    }
    for(ll j=1;j<n;j++){
        if(s[j]=='?'){
            dp[0][j]=1+dp[1][j-1];
            dp[1][j]=1+dp[0][j-1];
        }
        else if(s[j]=='0'){
            dp[0][j]=1+dp[1][j-1];
            dp[1][j]=0;
        }
        else{
            dp[1][j]=1+dp[0][j-1];
            dp[0][j]=0;
        }
    }
    for(int j=0;j<n;j++) ans+=max(dp[0][j],dp[1][j]);
    cout<<ans<<endl;
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