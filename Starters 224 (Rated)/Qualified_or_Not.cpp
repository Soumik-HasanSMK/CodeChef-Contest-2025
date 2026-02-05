#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (n >= 2 * x && n >= 2 * y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}