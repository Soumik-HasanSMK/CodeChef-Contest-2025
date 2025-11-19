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
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                cnt1++;
            else if (x == 2)
                cnt2++;
            else
                cnt3++;
        }

        int mn = min(cnt2, 1);

        int m = 0;
        m = max(m, cnt1 + mn);
        m = max(m, cnt3 + mn);
        m = max(m, cnt1);
        m = max(m, cnt3);
        m = max(m, mn);

        cout << (n - m) << "\n";
    }

    return 0;
}
