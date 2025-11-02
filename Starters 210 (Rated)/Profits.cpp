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
        int x, y;
        cin >> x >> y;
        int sum = 0;
        int s = y * (abs(x - y) + 1);
        int mn = min(x, y);
        int mx = max(x, y);
        for (int i = mn; i <= mx; i++)
            sum += i;
        cout << (((sum - s) >= 0) ? sum - s : 0) << endl;
    }
    return 0;
}