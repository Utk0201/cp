#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
#define pb push_back
#define pii pair<int, int>
#define mll map<ll, ll>
#define v vector
#define mod 1000000007



void solve(){
    string s;
    cin>>s;
    set<string> st;
    for(int i=1;i<=9;i++){
        string tmp;
        for(int j=0;j<10;j++){
            tmp.push_back(i+'0');
            st.insert(tmp);
        }
    }
    // for(auto it:st) cout<<it<<" ";
    // cout<<endl;
    ll ans=0;
    for(auto it:st){
        ull cur=stoull(it);
        ans+=(cur<=stoull(s));
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