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
        int n, c;
        cin >> n >> c;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        string S;
        cin >> S;

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (S[i] == '0')
                sum1 += v[i];
            else
                sum2 += v[i];
        }

        int ans = sum1;

        if (sum1 >= c)
            ans = max(ans, sum1 - c + sum2);

        cout << ans << endl;
    }
    return 0;
}
