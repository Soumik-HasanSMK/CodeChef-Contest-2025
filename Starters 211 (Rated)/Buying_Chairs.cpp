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
        int w, p, k;
        cin >> w >> p >> k;
        if (w >= k)
            cout << k * 2 << endl;
        else
            cout << w * 2 + (k - w) << endl;
    }
    return 0;
}