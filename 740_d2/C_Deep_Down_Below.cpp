#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

bool isSorted(vector<ll> &v) {
    for (int i = 0; i < v.size() - 1; i++)
        if (v[i] > v[i + 1]) return false;
    return true;
}

bool cmp(pll x,pll y){
    if(x.first==y.first) return x.second>y.second;
    return x.first<y.first;
}

void solve() {
    ll n,ans=-1;
    cin >> n;
    vector<pll> v(n);
    for(ll i=0;i<n;i++){
        ll m;
        cin>>m;
        v[i]={0,m};     //  {no_of_enemies,min_health_reqd}
        for(ll j=0;j<m;j++){
            ll tmp;
            cin>>tmp;
            v[i].first=max((ll)v[i].first,tmp+1-j);
        }
    }
    sort(v.begin(),v.end(),cmp);
    ll curHealth=-1;
    for(ll i=0;i<n;i++){
        if(curHealth==-1) {ans=v[i].first;curHealth=v[i].second+v[i].first;}
        else{
            if(curHealth<v[i].first){
                ans+=v[i].first-curHealth;
                curHealth=v[i].first;
            }
            curHealth+=v[i].second;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}