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

bool canMatch(string first, string second, int maxFlips)
{
    int mismatchCount = 0, flipCount = 0, equalCount = 0;
    for (size_t i = 0; i < first.length(); ++i)
    {
        if (first[i] != second[i])
        {
            mismatchCount++;
            flipCount += first[i] - '0';
        }
        else
        {
            equalCount++;
        }
    }

    if (mismatchCount == 2 && first.length() == 2 && maxFlips % 2 == 0)
    {
        return false;
    }

    return mismatchCount == flipCount * 2 && flipCount <= maxFlips;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numBits, maxFlips;
        cin >> numBits >> maxFlips;
        string first, second;
        cin >> first >> second;

        if (first == second && (first == "01" || first == "10") && maxFlips % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (canMatch(first, second, maxFlips))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
