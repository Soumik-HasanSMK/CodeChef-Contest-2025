
#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        int ans = 0;
        while (v.size() > 1)
        {
            int mx = v[0], ind = 0;
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] > mx)
                {
                    mx = v[i];
                    ind = i;
                }
            }
            int l = ind, r = v.size() - ind - 1;
            ans += min(l, r);
            v.erase(v.begin() + ind);
        }
        cout << ans << endl;
    }
    return 0;
}
