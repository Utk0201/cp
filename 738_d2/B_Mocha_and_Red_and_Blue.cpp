#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define ull unsigned long long int
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll n,mn=INT_MAX,c1=0,c2=0;
    cin>>n;
    string v;
    vector<char> ans1(n,'.'),ans2(n,'.');
    cin>>v;
    if(v.back()!='?'){
        ans1[n-1]=v.back();
        ans2[n-1]=v.back();
    }else{
        ans1[n-1]='R';
        ans2[n-1]='B';
    }
    for(ll i=n-2;i>=0;i--){
        if(v[i]!='?'){
            ans1[i]=v[i];
            ans2[i]=v[i];
            if(ans1[i+1]==v[i]) c1++;
            if(ans2[i+1]==v[i]) c2++;
        }else{
            if(ans1[i+1]=='R'){
                ans1[i]='B';
            }else{
                ans1[i]='R';
            }
            if(ans2[i+1]=='R'){
                ans2[i]='B';
            }else{
                ans2[i]='R';
            }
        }
    }
    if(c1<c2) {for(auto it:ans1) cout<<it;}
    else {for(auto it:ans2) cout<<it;}
    cout<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}