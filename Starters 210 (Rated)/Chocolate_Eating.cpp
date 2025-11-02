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
        ll a, b;
        cin >> a >> b;
        if (a == b)
            cout << a + b - 1 << endl;
        else
            cout << a + b << endl;
    }
    return 0;
}