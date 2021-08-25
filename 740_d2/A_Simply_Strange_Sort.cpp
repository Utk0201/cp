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

bool isSorted(vector<ll> &v) {
    for (int i = 0; i < v.size() - 1; i++)
        if (v[i] > v[i + 1]) return false;
    return true;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n, -1);
    for (ll i = 0; i < n; i++) cin >> v[i];
    for (ll i = 0; i <= pow(10, 8); i++) {
        if (isSorted(v)) {
            cout << i << endl;
            return;
        }
        bool changed = false;
        for (ll j = (i % 2); j < n; j += 2) {
            // if i is odd (implies we are at even iteration since 'i' is 0 indexed), j starts from index 1 else from index 1
            if (j + 1 < n && v[j + 1] < v[j]) {
                swap(v[j], v[j + 1]);
                changed = true;
            }
        }
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}