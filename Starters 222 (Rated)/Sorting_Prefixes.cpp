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
        {
            cin >> v[i];
        }

        int cost = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
                cost = i;
        }
        if (cost == -1)
            cout << 0 << endl;
        else
            cout << v[cost] << endl;
    }
    return 0;
}