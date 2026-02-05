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
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            char c = tolower(s[i]);
            if (c >= 'a' && c <= 'z')
                freq[c - 'a']++;
        }
        sort(freq, freq + 26);
        cout << freq[25] + freq[24] << endl;
    }
    return 0;
}
