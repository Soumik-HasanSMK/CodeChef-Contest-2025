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
        unordered_map<int, int> arr;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            arr[v[i]]++;
        }

        int cnt = 0;
        int ans = INT_MAX;

        for (auto it : arr)
        {
            if (it.second > cnt)
            {
                cnt = it.second;
                ans = it.first;
            }
            else if (it.second == cnt)
                ans = min(ans, it.first);
        }

        cout << ans << endl;
    }
    return 0;
}