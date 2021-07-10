#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    vector<ll> ar(n,-1);
    for(ll i=0;i<n;i++) cin>>ar[i];
    vector<ll> ans;
    ans.push_back(0);
    for(ll i=1;i<n;i++){
        // bits having 1 in ar[i-1] should also be 1 in ar[i]
        // to achieve this, do min. changes to be lexicographically smallest
        int cur=0;
        for(int j=0;j<=30;j++){
            if((ar[i-1]&(1<<j)) && ((ar[i]&(1<<j))==0)){
                cur^=(1<<j);
            }
        }
        ar[i]=(ar[i]^cur);
        ans.push_back(cur);
    }
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
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