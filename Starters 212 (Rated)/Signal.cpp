#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flag = false;
        int cnt = 0;

        for (char c : s)
        {
            if (c == '0')
                flag = true;
            else if (c == '1' && flag)
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
