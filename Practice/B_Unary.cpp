#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll M = 1000003;

ll BinExp(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        b >>= 1;
        a = (a * a) % M;
    }

    return ans;
}

int main()
{

    string s;
    cin >> s;
    ll k = 0;

    string s1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '>')
        {
            s1 += "1000";
        }
        else if (s[i] == '<')
        {
            s1 += "1001";
        }
        else if (s[i] == '+')
        {
            s1 += "1010";
        }
        else if (s[i] == '-')
        {
            s1 += "1011";
        }
        else if (s[i] == '.')
        {
            s1 += "1100";
        }
        else if (s[i] == ',')
        {
            s1 += "1101";
        }
        else if (s[i] == '[')
        {
            s1 += "1110";
        }
        else if (s[i] == ']')
        {
            s1 += "1111";
        }
    }
    int j = 0;

    for (ll i = s1.size() - 1; i >= 0; i--)
    {
        k += (ll(s1[i]) - '0') * BinExp(2, j);
        j++;
    }

    ll st = k % M;

    cout << st;
}
