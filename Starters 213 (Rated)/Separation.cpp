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
        int n, x;
        cin >> n >> x;

        ll ls = 0, g = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a < x)
                ls++;
            else if (a > x)
                g++;
            else
                e++;
        }

        if (e > 0)
            cout << "Yes" << endl;
        else if (ls == 0 || g == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
