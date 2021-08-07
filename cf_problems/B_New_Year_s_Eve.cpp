
#include <bits/stdc++.h>
using namespace std;

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
#define mod 1000000007

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==1) cout<<n<<endl;
    else{
        ll ans=0;
        bool on=false;
        for(ll i=60;i>=0;i--){
            if(n&(1LL<<i)) on=true;
            else if(on){
                ans^=(1LL<<i);
            }
        }
        cout<<(n^ans)<<endl;
    }
}

int main() {
    solve();
    return 0;
}
