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
        int idx = 1;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            int x = a / b;
            if (x > mx)
            {
                mx = x;
                idx = i + 1;
            }
        }
        cout << idx << endl;
    }

    return 0;
}