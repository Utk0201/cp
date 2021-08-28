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

set<ll> comps;

bool ok(string &s, string &comp) {
    ll i = 0;  //  at comp
    for (ll j = 0; j < s.size(); j++) {
        if (s[j] == comp[i]) i++;
        if (i == comp.size()) return true;
    }
    return false;
}

void solve() {
    ll k;
    cin >> k;
    string s;
    cin >> s;
    for (auto it : comps) {
        string s1=to_string(it);
        if (ok(s, s1)) {
            cout << to_string(it).size() << endl;
            cout << it << endl;
            return;
        }
    }
}

int main() {
    comps.clear();
    bool *composite = new bool[10001]();
    composite[1]=true;
    for (ll i = 2; i <= 10000; i++) {
        ll mul = 2;
        while (mul * i <= 10000) {
            composite[mul * i] = true;
            mul++;
        }
    }
    for (ll i = 1; i <= 10000; i++) if(composite[i]){
        comps.insert(i);
    }
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}