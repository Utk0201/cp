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
    ll n,idx=-1;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++) if(s[i]=='0') {idx=i;break;}
    if(idx==-1){
        cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
        return;
    }
    if(idx>=(n/2)){
        cout<<1<<" "<<idx+1<<" "<<1<<" "<<idx<<endl;
    }else{
        cout<<idx+1<<" "<<n<<" "<<idx+2<<" "<<n<<endl;
    }
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}