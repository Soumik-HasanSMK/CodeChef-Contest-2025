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
        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < m; i++)
            cin >> v2[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v1[i] > v2[j])
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}