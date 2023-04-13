/*
######################################################################################
#                                                                                    #
#                            ,.--------._                                            #
#                           /            ''.                                         #
#                         ,'                \     |"\                /\          /\  #
#                /"|     /                   \    |__"              ( \        // ) #
#               "_"|    /           z#####z   \  //                  \ \      // /  #
#                 \  #####        ##------".  \//                    \_\||||//_/   #
#                  \/-----\     /          ".  \                      \/ _  _ \     #
#                   \|      \   |   ,,--..       \                    \/|(O)(O)|     #
#                   | ,.--._ \  (  | ##   \)      \                  \/ |      |     #
#                   |(  ##  )/   \ `-....-//       |///////////////_\/  \      /     #
#                     '--'."      \                \              //     |__|      #
#                  /'    /         ) --.            \            ||     /      \     #
#               ,..|     \.____/    `-..         \   \       \|     \ 0  0 /     #
#            ,##/ |   ,/   /   \           \         \   \       U    / \//_/      #
#          :###.-  |  ,/   /     \        /' ""\      .\        (     /              #
#         /####|   |   (.____,---',/    |       |\=._|  |/               #
#        /#####|   |     \_||||,/             |####\    |  ||                #
#       /######\   \      \____/                /#####|   \  ||                #
#      /|#######`. `\                                /#######\   | ||                #
#     /++\#########\  \                      _,'    _/#########\ | ||                #
#    /++++|#########|  \      .---..       ,/      ,'##########.\|_||                #
#   //++++|#########\.  \.              ,-/      ,'########,+++++\_\               #
#  /++++++|##########\.   '._        _,/       ,'######,''++++++++\                  #
# |+++++++|###########|       -----."        _'#######' +++++++++++\                 #
# |+++++++|############\.     \     //      /#######/++++ S@yaN +++\                #
#      ________\__//_____________         #
#     / ________________________)        #
#    / /              _                                             _                #
#    | |             | |                                           | |               #
#     \ \            | | _           __           __           | |  _            #
#      \ \           | || \         / _)         / _  )          | | / )           #
#  __) )          | | | |        | |           (  _ /          | |< (            #
# (__/           || ||        ||            \_)         || \_)           #
#                                                                                    #
######################################################################################
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define lop(i, b) for (int i = (1); i < b; i++)
#define fo(i, b) for (int i = (0); i < (b); ++i)
#define repa(i, a, b) for (int i = int(a); i >= b; --i)
#define repb(i, b) for (int i = int(b); i >= 0; --i)
#define each(i, arr) for (auto &i : arr)
const ll mod = 1e9 + 7;
#define endl "\n"
#define eps 1e-7
#define PI 3.1415926535897932384626
#define inf 0x3f3f3f3f3f3f3f3f
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define in insert
#define pi pair<ll, ll>
#define mk make_pair
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define umap unordered_map
#define uset unordered_set
#define set_bits __builtin_popcountll
#define minheap priority_queue<ll, vi, greater<ll>>
#define maxheap priority_queue<ll>
#define minheapi priority_queue<pi, vpi, greater<pi>>
#define maxheapi priority_queue<pi>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define deb1(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deblp(a)          \
    for (auto j : a)      \
    {                     \
        cout << j << " "; \
    }                     \
    cout << endl;
#define clr(x, a) memset(x, a, sizeof(x))
#define fills(a, val) fill_n(a, sizeof(a) / sizeof(a[0]), val)
#define sq(x) ((x) * (x))
#define print(x) cout << x << endl
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vll = std::vector<long long>;
using vvl = std::vector<vll>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using vs = std::vector<string>;
using vvs = std::vector<vs>;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using vpll = std::vector<pair<long long, long long>>;
using vpii = std::vector<pair<int, int>>;
using mii = std::map<int, int>;
using mll = std::map<long long, long long>;
using mci = std::map<char, int>;
using msi = std::map<string, int>;
using umii = std::unordered_map<int, int>;
using umll = std::unordered_map<long long, long long>;
using si = std::set<int>;
using sll = std::set<long long>;
using sc = std::set<char>;
using ss = std::set<string>;
ll powmod(ll x, ll y)
{
    ll t;
    for (t = 1; y; y >>= 1, x = x * x % mod)
        if (y & 1)
            t = t * x % mod;
    return t;
}
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll lcm(ll x, ll y) { return x * (y / gcd(x, y)); }
ll modd(ll a) { return (a % mod + mod) % mod; }
double findMod(double a, double b)
{
    double mods;
    if (a < 0)
        mods = -a;
    else
        mods = a;
    if (b < 0)
        b = -b;
    while (mods >= b)
        mods = mods - b;
    if (a < 0)
        return -mods;
    return mods;
}
// find primes smaller than n
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (ll i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (ll j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll add(ll a, ll b) { return modd(modd(a) + modd(b)); }
ll mul(ll a, ll b) { return modd(modd(a) * modd(b)); }
int smask(int i, int pos) { return (i | (1 << pos)); }
int clmask(int i, int pos) { return (i & (~(1 << pos))); }
bool chmask(int i, int pos) { return (i & (1 << pos)) != 0; }
double cordist(pair<double, double> a, pair<double, double> b)
{
    return sqrt(sq(a.first - b.first) + sq(a.second - b.second));
}

long long binpow(long long a, long long b)
{
    if (b <= 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return mul(mul(res, res), a);
    else
        return mul(res, res);
}
ll divs(ll a, ll b) { return a * binpow(b, mod - 2); }
void solve()
{
    ll n;
    cin >> n;
    ll a[26] = {};
    string s;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s += c;
        a[(int)(c - 'a')]++;
    }
    ll ans = INT_MAX;
    ll ind = -1;
    for (int i = 0; i < 26; i++)
    {
        int count = i + 1;
        if (n % count != 0)
            continue;
        int z = n / count;
        priority_queue<int> pq;
        for (int i = 0; i < 26; i++)
        {
            pq.push(a[i]);
        }
        int p = 0;
        while (count--)
        {
            int x = pq.top();
            pq.pop();
            p += max(0, z - x);
        }
        if (ans > p)
        {
            ans = p;
            ind = i + 1;
        }
    }
    priority_queue<pair<int, int>> pq;
    ll hash[26] = {};
    for (int i = 0; i < 26; i++)
    {
        pq.push(make_pair(a[i], i));
        hash[i] = INT_MAX;
    }
    ll z = n / ind;
    while (ind--)
    {
        int k = pq.top().second;
        int l = pq.top().first;
        pq.pop();
        hash[k] = l - z;
    }
    char x[n];
    for (int i = 0; i < n; i++)
    {
        ll k = (int)(s[i] - 'a');
        if (hash[k] == INT_MAX)
        {
            for (int j = 0; j < 26; j++)
            {
                if (hash[j] < 0)
                {
                    hash[j]++;
                    x[i] = char(j + (int)('a'));
                    break;
                }
            }
        }
        else if (hash[k] > 0)
        {
            hash[k]--;
            for (int j = 0; j < 26; j++)
            {
                if (hash[j] < 0)
                {
                    hash[j]++;
                    x[i] = char(j + (int)('a'));
                    break;
                }
            }
        }
        else
            x[i] = char(k + (int)('a'));
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++)
        cout << x[i];
    cout << "\n";
}
signed main()
{
    // freopen("input.in","r",stdin); freopen("output.in","w",stdout);
    IOS int k = 1;
    // init();
    cin >> k;
    // int counter=1;
    while (k--)
    {
        // printf("Case #%d: ",counter++);
        solve();
    }
    return 0;
}