#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k, cnt = 0;
        cin >> n >> x >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > (k * 100 + x))
                cnt++;
        }
        if (cnt - k > 0)
            cout << cnt - k + 1 << endl;
        else
            cout << 1 << endl;
    }
}
