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
    ll n,k,x,gap=0;
    cin>>n>>k>>x;
    vector<ll> v(n,-1);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll> holes;
    for(ll i=0;i<n-1;i++){
        ll curHoles = (v[i+1]-v[i])/x;
        if((v[i+1]-v[i])%x==0) curHoles--;
        if(curHoles<=0) continue;
        if(curHoles) gap++;
        holes.push_back(curHoles);
    }
    sort(holes.begin(),holes.end());
    // normally I have only 1 segment
    // if gap==1 then I have 2 segment
    // if gap==y then I have y+1 segment
    // Currently, number of segments= gap+1
    ll curSeg=gap+1;
    // I should fill the smallest gap first. If one gap is filled, curSeg--
    for(ll i=0;i<holes.size();i++){
        if(holes[i]<=k){
            k-=holes[i];
            curSeg--;
        }
        else break;
    }
    cout<<curSeg<<endl;
}

int main()
{
    solve();
    return 0;
}