#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int mx = *max_element(v.begin(), v.end());
        int cnt_max = count(v.begin(), v.end(), mx);
        int cnt_m1 = count(v.begin(), v.end(), mx - 1);

        if (cnt_max >= 2)
            cout << mx - 1 << "\n";
        else if (cnt_m1 == n - 1)
            cout << mx - 2 << "\n";
        else
            cout << mx - 1 << "\n";
    }
    return 0;
}
