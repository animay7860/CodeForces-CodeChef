#include <iostream>
#include <vector>
#include <map>

using namespace std;

int t, n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int>> v(n + 1, vector<int>());
        map<int, int> ap;

        for (int i = 1, k; i <= n; ++i)
        {
            cin >> k;
            for (int j = 0, b; j < k; ++j)
            {
                cin >> b;
                v[i].push_back(b);
                ++ap[b];
            }
        }

        bool yes = 0;

        for (int i = 1; i <= n; ++i)
        {
            bool Unique = 0;
            for (int b : v[i])
                if (ap[b] == 1)
                    Unique = 1;

            if (!Unique)
            {
                yes = 1;
                break;
            }
        }

        cout << (yes ? "YES" : "NO") << '\n';
    }
}
