
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

void solve(){
    ll n,i;
    cin>>n;
    vector<ll> v;
    for(i=1;n;i++){
        if(i%10==3 || i%3==0) continue;
        if(n==1){
            cout<<i<<endl;
            return;
        }
        n--;
    }
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}