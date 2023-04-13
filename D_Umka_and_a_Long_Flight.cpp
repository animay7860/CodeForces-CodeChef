
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> F;

bool solve(ll x, ll y, ll n)
{

    if (n == 1)
        return true;

    if (min(y, F[n + 1] - y + 1) > F[n + 1] - F[n])
    {
        return false;
    }
    y = min(y, F[n + 1] - y + 1);
    return solve(y, x, n - 1);
}

int main()
{
    ll t, n, x1, y1, x2, y2;
    cin >> t;

    F.push_back(1);
    F.push_back(1);
    for (int i = 0; i < 46; i++)
    {
        F.push_back(F[i] + F[i + 1]);
    }

    while (t--)
    {
        cin >> n >> x1 >> y1;

        if (solve(x1, y1, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}