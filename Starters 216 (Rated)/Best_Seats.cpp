#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) v.begin(), v.end()    // sort(all(v)): asc
#define rall(v) v.rbegin(), v.rend() // sort(rall(v)): desc
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define print(ans) cout << ans << '\n'
#define read(v)       \
    for (auto &x : v) \
    cin >> x

int main()
{
    test
    {
        int n;
        cin >> n;
        vector<int> v(n);
        read(v);
        vector<int> sum(n);
        for (int i = 0; i < n - 1; i++)
            sum[i] = v[i] + v[i + 1];
        sort(sum.begin(), sum.end());
        cout << sum[0] + sum[1] << "\n";
    }
    return 0;
}