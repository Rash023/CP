#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    // Write your code here
}

int main()
{
    fastio;
    int t = 1;
    cin >> t; // Uncomment if there are multiple test cases
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        cin >> v;

        vector<ll> bits(64, 0);
        for (ll i : v)
        {
            int idx = 0;
            ll val = i;
            while (val > 0)
            {
                bits[idx] += val % 2;
                val /= 2;
                idx++;
            }
        }
        int val = 0;
        for (int i = 0; i < 64; i++)
        {
            if (bits[i] == 0)
                break;
            val += (1 << i);
        }
        int res = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] > val)
                res++;
        }
        cout << res << endl;
    }
    return 0;
}