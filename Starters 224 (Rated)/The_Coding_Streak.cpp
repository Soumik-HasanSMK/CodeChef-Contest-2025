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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cur = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= 1)
            {
                cur++;
                mx = max(mx, cur);
            }
            else
                cur = 0;
        }
        cout << mx << endl;
    }
    return 0;
}