#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<ll> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == n - 1)
            {
                ans[v[i].second] = -1;
                continue;
            }
            ll pre = (v[i - 1].first + v[i].first) / 2;
            ll post = (v[i].first + v[i + 1].first) / 2;
            ll cnt = post - (pre + 1) + 1;

            if (cnt < 0)
                cnt = 0;
            ans[v[i].second] = cnt;
        }
        for (int i = 0; i < n; i++)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}