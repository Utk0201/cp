#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool cmp(int x,int y){
    return x>y;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n,-1);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> ar;
    for(auto it:v){
        if(it%2==0) ar.push_back(it);
    }
    for(auto it:v){
        if(it%2==1) ar.push_back(it);
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(ar[i],2*ar[j])>1) ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}