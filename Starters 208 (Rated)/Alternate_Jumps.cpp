#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x%2==0)
            cout<<x/2<<endl;
        else
            cout<<(x/2)+1<<endl;
    }
    return 0;
}