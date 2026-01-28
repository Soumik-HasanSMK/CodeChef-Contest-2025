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
        int n, x, k;
        cin >> n >> x >> k;
        if (x % k == 0)
            cout << 0 << endl;
        else
        {
            int r = k - (x % k);
            if (x + r <= n)
                cout << min(r, (x % k)) << endl;
            else
                cout << (x % k) << endl;
        }
    }
    return 0;
}