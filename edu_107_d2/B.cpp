#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

ll max(ll x,ll y){
    return x>y?x:y;
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    //  a,b,c are number of digits of x,y gcd(x,y)
    vector<ll> v={2,13,101,1009,10007,100003,1000003,10000019,100000007};
    ll x=v[c-1],y=v[c-1],z=v[c-1];
    while(floor(log10(x))<a-1){
        x*=10;
    }
    while(floor(log10(y))<b-1){
        y*=10;
    }
    if(floor(log10(y-z))==b){
        y-=z;
    }
    else y+=z;
    cout<<x<<" "<<y<<endl;
//    cout<<"gcd= "<<__gcd(x,y)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

