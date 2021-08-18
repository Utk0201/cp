
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define ull unsigned long long int
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll d=abs(b-a);
    // assume min(a,b) and c-d lies in 1st half  
    vector<ll> v1;
    v1.push_back(min(a,b));
    v1.push_back(c-d);
    v1.push_back(max(a,b));
    v1.push_back(c);
    sort(v1.begin(),v1.end());
    if(v1[0]>0 && v1[1]<=d && v1[2]>d && v1[3]<=2*d && v1[0]!=v1[1] && v1[1]!=v1[2] && v1[2]!=v1[3]){
        cout<<c-d<<endl;
        return;
    }
    vector<ll> v2;
    v2.push_back(min(a,b));
    v2.push_back(c+d);
    v2.push_back(max(a,b));
    v2.push_back(c);
    sort(v2.begin(),v2.end());
    if(v2[0]>0 && v2[1]<=d && v2[2]>d && v2[3]<=2*d && v2[0]!=v2[1] && v2[1]!=v2[2] && v2[2]!=v2[3]){
        cout<<c+d<<endl;
        return;
    }
    cout<<-1<<endl;
}

int main() {
    ll t;
    cin>>t;
    while (t--) solve();
    return 0;
}