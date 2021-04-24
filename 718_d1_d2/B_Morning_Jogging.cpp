#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    // priority_queue<int> pq;
    vector<vector<int>> ar(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            ar[i].pb(x);
            // pq.push(x);
        }
        sort(ar[i].begin(), ar[i].end());
    }
    for (int j = 0; j < m; j++)
    {
        int icur = -1, val = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (ar[i][0] < val)
            {
                icur = i;
                val = ar[i][0];
            }
        }
        //  in ans[icur] push val
        //  ar[icur].erase(val);
        //  in ans[t] where t!=icur push ar[t].back()
        //  ar[t].pop_back
        for (int i = 0; i < n; i++)
        {
            if (i == icur)
            {
                ans[i].pb(val);
                ar[i].erase(ar[i].begin());
            }
            else
            {
                ans[i].pb(ar[i].back());
                ar[i].pop_back();
            }
        }
    }
    for (auto it : ans)
    {
        for (auto it1 : it)
            cout << it1 << " ";
        cout << endl;
    }
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