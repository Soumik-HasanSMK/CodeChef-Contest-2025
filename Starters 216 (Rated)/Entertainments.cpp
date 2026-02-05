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
    int n;
    cin >> n;
    int ans = n * 200;
    if (ans > 1000)
        print(1000);
    else
        print(ans);
    return 0;
}