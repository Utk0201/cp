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
    ll n,myAns=0;
    cin>>n;
    vector<ll> enemyPawn(n,-1),myPawn(n,-1);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(ll i=0;i<n;i++) enemyPawn[i]=s1[i]-'0';
    for(ll i=0;i<n;i++) myPawn[i]=s2[i]-'0';
    for(ll i=0;i<n;i++){
        if(!myPawn[i]) continue;
        if(enemyPawn[i]==0) myAns++;
        else if(i && enemyPawn[i-1]==1){
            enemyPawn[i-1]=-1;
            myAns++;
        }
        else if(i+1<n && enemyPawn[i+1]==1){
            enemyPawn[i+1]=-1;
            myAns++;
        }
    }
    cout<<myAns<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}