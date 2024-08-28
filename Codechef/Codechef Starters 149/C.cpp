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
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            pq.push({-a[i], i});
            cnt++;
        }
        else
            pq.push({a[i], i});
    }
    long long sum = 0;
    if (cnt % 2 != 0)
    {
        sum -= pq.top().first;
        pq.pop();
    }

    while (!pq.empty())
    {
        int ele1 = pq.top().first;
        pq.pop();
        sum += ele1;
    }
    cout << sum << endl;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t; // Uncomment if there are multiple test cases
    while (t--)
    {
        solve();
    }
    return 0;
}