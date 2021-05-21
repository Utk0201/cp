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
    vector<int> ar(n,-1);
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int> emp,sit;
    for(int i=0;i<n;i++){
        if(ar[i]) sit.push_back(i);
        else emp.push_back(i);
    }
    int n1=sit.size(),m1=emp.size();
    vector<vector<int>> dp(n1+1,vector<int>(m1+1,INT_MAX));
    //  person sit[i] may sit on emp[j] or not
    // dp[n1-1][m1-1]=abs(emp[m1-1]-sit[n1-1]);
    for(int i=0;i<=n1;i++) for(int j=i;j<=m1;j++){
        if(i==0) dp[i][j]=0;
        else{
            dp[i][j] = min(dp[i-1][j-1]+abs(emp[j-1]-sit[i-1]),dp[i][j-1]);
        }
    }
    cout<<dp[n1][m1]<<endl;
}

int main()
{
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
