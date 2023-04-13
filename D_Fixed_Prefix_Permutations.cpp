#include <bits/stdc++.h>
using namespace std;
int t, n, m;
int a[50010][20], b[20];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int ans = 0;
            for (int j = 1; j <= n; j++)
            {
                for (int k = 1; k <= m; k++)
                {
                    b[k] = a[i][a[j][k]];
                }
                int cnt = 0;
                for (int k = 1; k <= m; k++)
                {
                    if (b[k] == k)
                        cnt++;
                    else
                        break;
                }
                ans = max(ans, cnt);
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}