#include <bits/stdc++.h>
using namespace std;

#define speed                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define russian setlocale(LC_ALL, "Russian_Russia.20866");
#define file freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pll pair<ll, ll>
#define all(s) s.begin(), s.end()
#define pb push_back
#define ins insert
#define mp make_pair
#define sz(x) x.size()
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound

const ll N = 200010;
const ll mod = 1e6 + 3;
const ll pi = 283;
const ld P = acos(-1);
const ll inf = 1e9 + 7;

ll add(ll a, ll b)
{
    if (a + b < 0)
        return a + b + mod;
    if (a + b >= mod)
        return a + b - mod;
    return a + b;
}

ll mul(ll a, ll b)
{
    return a * b % mod;
}

ll binpow(ll a, ll n)
{
    ll ret = 1;
    while (n)
    {
        if (n & 1)
            ret = mul(ret, a);
        a = mul(a, a);
        n >>= 1;
    }
    return ret;
}
ll n, k;
ll a[N], bruh[N];
void solve()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        bruh[i % k] += a[i];
    }
    ll mn = inf, pos = -1;
    for (ll i = 0; i < k; i++)
    {
        if (bruh[i] < mn)
        {
            mn = bruh[i];
            pos = i + 1;
        }
    }
    cout << pos << '\n';
}
signed main()
{
    speed;
    russian;
    // file;
    ll test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}