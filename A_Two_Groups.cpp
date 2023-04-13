#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans += a[i];
        }
        cout << abs(ans) << endl;
    }
    return 0;
}