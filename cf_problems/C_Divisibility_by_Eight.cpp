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

bool ok(string &s)
{
    int n = stoi(s);
    return n % 8 == 0;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string small;
    for (int i = 0; i < n; i++)
    {
        small.push_back(s[i]);
        if (ok(small))
        {
            cout << "YES\n";
            cout << small << endl;
            return;
        }
        for (int j = i + 1; j < n; j++)
        {
            small.push_back(s[j]);
            if (ok(small))
            {
                cout << "YES\n";
                cout << small << endl;
                return;
            }
            for (int k = j + 1; k < n; k++)
            {
                small.push_back(s[k]);
                if (ok(small))
                {
                    cout << "YES\n";
                    cout << small << endl;
                    return;
                }
                small.pop_back();
            }
            small.pop_back();
        }
        small.pop_back();
    }
    cout << "NO\n";
}

int main()
{
    solve();
    return 0;
}