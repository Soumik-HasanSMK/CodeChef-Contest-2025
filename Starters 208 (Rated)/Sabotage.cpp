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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < x; i++)
        {
            v.pop_back();
        }
        int sum = k + 100 * x;
        v.push_back(sum);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == sum)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}