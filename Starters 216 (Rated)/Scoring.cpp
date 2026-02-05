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

int main()
{
    test
    {
        int x, y;
        cin >> x >> y;
        int b = (y - x) / 2;
        int a = y - b;
        cout << a << " " << b << "\n";
    }
    return 0;
}