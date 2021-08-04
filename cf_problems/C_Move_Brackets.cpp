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

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v;
    for(auto it:s){
        if(v.size() && v.back()=='(' && it==')') v.pop_back();
        else v.push_back(it);
    }
    cout<<v.size()/2<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}