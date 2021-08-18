#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mii map<int, int>
#define mll map<ll, ll>
#define pic pair<int, char>
#define pdd pair<double, double>
#define pll pair<long, long>
#define vvi vector<vector<int>>
#define minPqVec priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
#define ll long long
#define ull unsigned long long int
#define pii pair<int, int>
#define mod 1000000007
int getPar(vector<ll> &par, ll x) {
    if (par[x] == x) return x;
    return getPar(par, par[x]);
}
void solve() {
    ll n, m1, m2;
    cin >> n >> m1 >> m2;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    vector<ll> par1(n, -1), par2(n, -1);
    for (ll i = 0; i < n; i++) par1[i] = i, par2[i] = i;
    for (ll i = 0; i < m1; i++) {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        par1[getPar(par1, x)] = getPar(par1, y);
    }
    for (ll i = 0; i < m2; i++) {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        par2[getPar(par2, x)] = getPar(par2, y);
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n-1; i++) {
        for (ll j = i + 1; j < n; j++) {
            ll p1 = getPar(par1, i), p2 = getPar(par1, j), f1 = getPar(par2, i), f2 = getPar(par2, j);
            if (p1 != p2 && f1 != f2) {
                par1[p2] = p1, par2[f2] = f1;
                ans.push_back({i + 1, j + 1});
            }
        }
    }
    cout << (ans.size()) << endl;
    for (auto it : ans) cout << it.first << " " << it.second << endl;
}
int main() {
    ll t = 1;
    while (t--) solve();
    return 0;
}