#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    string x[100];
    for (int i = 1; i <= m; i++)
    {

        cin >> x[i];
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] == 'W' && (x[i + 1][j] == 'P' || x[i - 1][j] == 'P' || x[i][j + 1] == 'P' || x[i][j - 1] == 'P'))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
