#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define ll long long int
using namespace std;

void solve(){
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    if(n==1 && m==1){
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<"\n";
        return;
    }
    i--,j--;
    vector<vector<ll>> v={{0,0,n-1,0},{n-1,0,n-1,m-1},{n-1,m-1,0,m-1},{0,m-1,0,0},{0,0,n-1,m-1},{0,m-1,n-1,0}};
    vector<ll> ans;
    ll dis=0;
    for(auto it:v){
        vector<ll> cur=it;
        // (i,j) (it[0],it[1]) (it[2],it[3])
        ll curDis = abs(it[0]-i)+abs(it[1]-j)+abs(it[2]-it[0])+abs(it[3]-it[1])+abs(it[2]-i)+abs(it[3]-j);
        if(curDis>dis){
            dis=curDis;
            ans=it;
        }
    }
    for(auto it:ans) cout<<it+1<<" ";
    cout<<endl;
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