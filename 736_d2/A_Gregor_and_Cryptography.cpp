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
    ll P;
    cin>>P;
    if(P==5){
        cout<<2<<" "<<4<<endl;
        return;
    }
    cout<<2<<" "<<((P-1)/2)<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}