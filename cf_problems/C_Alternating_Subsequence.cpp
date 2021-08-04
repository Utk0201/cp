//  https://codeforces.com/problemset/problem/1343/C
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
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long

void solve()
{
    ll n,i=0,ans=0;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll it=0;it<n;it++) cin>>v[it];
    // if the first element is positive, I must take the maximum of those positive elements
    // if the first element is negative, I must take the minimum of those negative elements
    // and continue this process till the end of the array
    while (i<n){
        ll choosen=v[i],j;
        for(j=i;j<n && !((v[i]>0)^(v[j]>0));j++) choosen=max(choosen,v[j]);            
        ans+=choosen;
        i=j;
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}