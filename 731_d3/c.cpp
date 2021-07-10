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
    // Before they started, there were already k lines written in the file.
    // It's known that they have worked together on the same file for n+m minutes
    // Every minute exactly one of them does one of two actions: adds a new line to the end of the file or changes one of its lines.
    // Monocarp worked in total for n minutes and performed the sequence of actions [a1,a2,…,an]
    // Polycarp worked in total for m minutes and performed the sequence of actions [b1,b2,…,bm]
    ll k,n,m;
    cin>>k>>n>>m;
    vector<int> a(n,-1),b(m,-1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    ll lines=k,p1=0,p2=0;
    vector<int> ans;
    while (p1<n && p2<m){
        if(a[p1]==0){
            ans.push_back(0);
            lines++;
            p1++;
            continue;
        }
        if(b[p2]==0){
            ans.push_back(0);
            lines++;
            p2++;
            continue;
        }
        if(a[p1]<=lines){
            ans.push_back(a[p1]);
            p1++;
            continue;
        }
        if(b[p2]<=lines){
            ans.push_back(b[p2]);
            p2++;
            continue;
        }
        cout<<-1<<endl;
        return;
    }
    while (p1<n){
        if(a[p1]>lines){
            cout<<-1<<endl;
            return;
        }
        if(a[p1]==0) lines++;
        ans.push_back(a[p1]);
        p1++;
    }
    while (p2<m){
        if(b[p2]>lines){
            cout<<-1<<endl;
            return;
        }
        if(b[p2]==0) lines++;
        ans.push_back(b[p2]);
        p2++;
    }    
    for(auto it:ans) cout<<it<<" ";
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