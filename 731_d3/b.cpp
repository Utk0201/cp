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
    string s;
    cin>>s;
    int lf=-1,rt=-1,n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            if(lf!=-1){
                cout<<"NO\n";
                return;
            }
            lf=i,rt=i;
        }
    }
    if(lf==-1){
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(lf && s[lf-1]=='a'+i) lf--;
        else if(rt+1<n && s[rt+1]=='a'+i) rt++;
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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