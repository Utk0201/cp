#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
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

void solve(){
    string s,ans;
    cin>>s;
    if(s.size()<=10){
        cout<<s<<endl;
    }
    else{
        cout<<s[0]<<s.size()-2<<s.back()<<endl;
    }
}

int main()
{
    ll t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}