#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<string>
#define ull unsigned long long int
#define minPqVec priority_queue<string, vector<string>, greater<string>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll n;
    cin>>n;
    ll *ar=new ll[n]();
    deque<ll> dq;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(dq.empty() || dq.front()>x) dq.push_front(x);
        else dq.push_back(x);
    }
    while (dq.size()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while (t--) solve();
}