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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt = i;
                break;
            }
        }
        if (cnt == 0 && s[0]=='0')
            cout << n << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}