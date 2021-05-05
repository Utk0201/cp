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
    string s;
    cin>>s;
    v<char> dp(26,0);
    dp[s[0]-'A']++;
    for(ll i=1;i<s.size();i++){
        if(s[i]!=s[i-1] && dp[s[i]-'A']>0){
            cout<<"NO\n";
            return;
        }
        dp[s[i]-'A']++;
    }
    cout<<"YES\n";
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