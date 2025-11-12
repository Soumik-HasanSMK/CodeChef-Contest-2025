#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'x' && s[i + 1] == 'y' || s[i] == 'y' && s[i + 1] == 'x')
            {
                count++;
                i++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
