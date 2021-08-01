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
#define ll long long

void solve(){
    ll n,m,k=0;
    cin>>n>>m;
    m++;
    // sequence: n^0,n^1,...,n^m
    for(int i=30;i>=0 && n<m;i--) {
        if((m&(1<<i)) == (n&(1<<i))){
            continue;
        }
        else if(m&(1<<i)){
            k|=(1<<i);
            n|=(1<<i);         
        }
    }
    cout<<k<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}