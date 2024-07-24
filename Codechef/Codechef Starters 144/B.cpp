#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vii;
typedef vector<long long> vll;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fl(i, n) for (int i = 0; i < n; i++)
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T1, typename T2> // cout >> pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout >> vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

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
        solve();
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        long long res = 0;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll leftover = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                leftover += a[i] - x;
                res++;
            }
            else
            {
                int diff = x - a[i];
                pq.push(diff);
            }
        }

        while (!pq.empty() && leftover > 0)
        {
            int ele = pq.top();
            if (leftover - ele >= 0)
            {
                leftover -= ele;
                res++;
                pq.pop();
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}