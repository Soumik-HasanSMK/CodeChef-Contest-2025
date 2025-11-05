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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ll mx = *max_element(v.begin(), v.end());
        vector<ll> v1, v2, v3;
        for (auto x : v)
        {
            if (x == mx)
                v1.push_back(x);
            else
                v2.push_back(x);
        }
        if (v1.size() == n)
            v3 = v1;
        else
        {
            v3.push_back(v1[0]);
            v3.push_back(v2[0]);
            for (int i = 1; i < v1.size(); ++i)
                v3.push_back(v1[i]);
            for (int i = 1; i < v2.size(); ++i)
                v3.push_back(v2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << v3[i];
            if (i == n - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}