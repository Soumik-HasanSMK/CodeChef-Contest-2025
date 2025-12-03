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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt0 = count(s.begin(), s.end(), '0');

        vector<int> v(k, 0);
        for (int i = 0; i < n; i++)
            v[i % k]++;

        int mn0 = 0, mx0 = 0;

        for (int sz : v)
        {
            int mn = sz / 2;
            int mx = (sz + 1) / 2;
            mn0 += mn;
            mx0 += mx;
        }

        if (cnt0 >= mn0 && cnt0 <= mx0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
