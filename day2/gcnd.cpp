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
        int arr[n];
        int maxi = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        int temp = maxi - 1;
        while ((maxi % temp == 0 || mini % temp == 0) && temp > 0)
            temp--;
        cout << temp << endl;
    }
}
