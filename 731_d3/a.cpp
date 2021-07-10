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
#define ll long long int

void solve(){
    int xa,ya,xb,yb,xf,yf;
    cin>>xa>>ya;
    cin>>xb>>yb;
    cin>>xf>>yf;
    if((xa==xf && xb==xf) && yf>=min(ya,yb) && yf<=max(ya,yb)){
        cout<<2+abs(xa-xb)+abs(ya-yb)<<endl;
        return;
    }
    if((ya==yf && yb==yf) && xf>=min(xa,xb) && xf<=max(xa,xb)){
        cout<<2+abs(xa-xb)+abs(ya-yb)<<endl;
        return;
    }
    cout<<abs(xa-xb)+abs(ya-yb)<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}