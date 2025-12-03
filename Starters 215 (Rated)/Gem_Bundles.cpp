#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;

        if (a == 0 || b == 0 || c == 0)
            cout << sum * 3 << endl;
        else
        {
            int mn = min(a, min(b, c));
            cout << mn * 10 + (sum - mn * 3) * 3 << endl;
        }
    }
    return 0;
}
