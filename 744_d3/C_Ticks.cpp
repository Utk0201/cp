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

void mark(char **ar,bool **vis,ll i,ll j,ll m){
    for(ll h=0;i-h>=0 && j-h>=0 && j+h<m && ar[i-h][j-h]=='*' && ar[i-h][j+h]=='*';h++) vis[i-h][j-h]=true,vis[i-h][j+h]=true;
}

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    char **ar=new char*[n]();
    ll **upLeft=new ll*[n](),**upRight=new ll*[n]();
    bool **vis=new bool*[n]();
    for(ll i=0;i<n;i++) ar[i]=new char[m],upLeft[i]=new ll[m](),upRight[i]=new ll[m](),vis[i]=new bool[m]();
    for(ll i=0;i<n;i++) for(ll j=0;j<m;j++){
        cin>>ar[i][j];
        if(ar[i][j]=='*') upLeft[i][j]=1,upRight[i][j]=1;
        if(i && j && upLeft[i-1][j-1] && ar[i][j]=='*') upLeft[i][j]+=upLeft[i-1][j-1];
        if(i && j+1<m && upRight[i-1][j+1] && ar[i][j]=='*') upRight[i][j]+=upRight[i-1][j+1];
    }
    for(ll i=n-1;i>=0;i--) for(ll j=m-1;j>=0;j--) if(upLeft[i][j]>k && upRight[i][j]>k) mark(ar,vis,i,j,m);
    bool ok=true;
    for(ll i=0;i<n && ok;i++) for(ll j=0;j<m && ok;j++) if(ar[i][j]=='*' && !vis[i][j]) ok=false;
    if(ok) cout<<"YES\n";
    else cout<<"NO\n"; 
}

int main(){
    ll t;
    cin>>t;
    while (t--) solve();
}