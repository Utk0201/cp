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
    ll lf,rt,ans=0;
    cin>>lf>>rt;
    if((rt/2)<lf){
        cout<<rt%lf<<endl;
        return;
    }
    ll n1=rt/2;
    ans=max(ans,rt%n1);
    if(n1-1>=lf){
        ans=max(ans,rt%(n1-1));
    }
    if(n1+1<=rt){
        ans=max(ans,rt%(n1+1));
    }
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}