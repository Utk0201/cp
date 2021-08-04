//  https://codeforces.com/problemset/problem/466/C?locale=en
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
    ll n,sum=0,p1=-1,p2=-1,tmp=0,ans=0;
    cin>>n;
    vector<ll> v(n,-1);
    for(ll it=0;it<n;it++) cin>>v[it],sum+=v[it];
    if(sum%3){
        cout<<0<<endl;
        return;
    }
    sum/=3;
    vector<ll> oneSum,twoSum;
    //  oneSum-> contains index 'i' such that sum(v[0],v[i])=sum
    //  twoSum-> contains index 'i' such that sum(v[0],v[i])=2*sum
    for(ll i=0;i<n;i++){
        tmp+=v[i];
        if(tmp==sum) oneSum.push_back(i);
        if(tmp==2*sum) twoSum.push_back(i);
    }
    sort(oneSum.begin(),oneSum.end());
    sort(twoSum.begin(),twoSum.end());
    if(twoSum.size() && twoSum.back()==n-1) twoSum.pop_back();
    for(ll i=0;i<oneSum.size() && twoSum.size();i++){
        ll notReqd = lower_bound(twoSum.begin(),twoSum.end(),oneSum[i]+1)-twoSum.begin();
        ll reqd = twoSum.size()-notReqd;
        if(reqd>=0) ans+=reqd;
    }
    cout<<ans<<endl;
}

int main()
{
    ll t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}