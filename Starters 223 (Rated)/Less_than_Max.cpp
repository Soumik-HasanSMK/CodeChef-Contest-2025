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

        int val = 1;
        int len = 0;
        for (int x : v)
        {
            if (x == val)
            {
                len++;
                val++;
            }
            else if (x < val)
                len++;
        }
        cout << len << endl;
    }
    return 0;
}
