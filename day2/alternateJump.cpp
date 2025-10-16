#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        int ans = n;
        while (i <= n)
        {
            if (i & 1)
            {
                ans = ans - (n - i);
            }
            else
            {
                ans = ans + (n - i);
            }
            i++;
        }
        cout << ans << endl;
    }
}
