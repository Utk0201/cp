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
    string s;
    cin>>s;
    ll a=0,b=0,c=0;
    for(auto it:s){
        if(it=='A') a++;
        else if(it=='B') b++;
        else c++;
    }
    if(a+c==b) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ll t;
    cin>>t;
    while (t--) solve();
}