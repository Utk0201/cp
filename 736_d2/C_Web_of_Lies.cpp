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
    ll n,m,q,vul=0;
    cin>>n>>m;
    vector<int> strongFriendsCount(n,0);
    for(ll i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        if(!strongFriendsCount[min(u-1,v-1)]) vul++;     // calculating vulnerable nodes
        strongFriendsCount[min(u-1,v-1)]++;           
    }
    cin>>q;
    while (q--){
        ll a;
        cin>>a;
        if(a==3){
            cout<<(n-vul)<<endl;
        }
        else{
            ll u,v;
            cin>>u>>v;
            if(a==1){
                // 1. Add a friendship between nobles u and v.
                if(!strongFriendsCount[min(u-1,v-1)]) vul++;
                strongFriendsCount[min(u-1,v-1)]++;
            }else{
                // 2. Remove a friendship between nobles u and v.
                strongFriendsCount[min(u-1,v-1)]--;
                if(!strongFriendsCount[min(u-1,v-1)]) vul--;
            }
        }
    }    
}

int main()
{
    ll t=1;
    while (t--) solve();
    return 0;
}