#include <bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
using namespace std;

void solve(){
    ll n;
    cin>>n;
    if(n%2050!=0){
        cout<<-1<<endl;
        return;
    }
    ll cur=2050000000000000000,ans=0;
    while(cur>=2050){
        if(n>=cur){
            // cout<<"n= "<<n<<" cur= "<<cur<<endl;
            // cout<<n/cur<<endl;
            ans+=(n/cur);
            n=(n%cur);
        }
        cur/=10;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}