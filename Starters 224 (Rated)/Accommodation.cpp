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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        if (x + y > n)
        {
            cout << -1 << endl;
            continue;
        }
        ll mn = (b + g + n - 1) / n;
        if (mn * x <= b && mn * y <= g)
            cout << mn << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}