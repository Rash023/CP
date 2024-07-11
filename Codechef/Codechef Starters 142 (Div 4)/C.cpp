#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int closestPowerOfTwo(int n)
{
    // If n is less than 1, the closest power of two is 1
    if (n < 1)
        return 1;

    // Find the largest power of two less than or equal to n
    int lower = 1;
    while (lower * 2 <= n)
    {
        lower *= 2;
    }

    // Find the smallest power of two greater than or equal to n
    return lower;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t; // Uncomment if there are multiple test cases
    while (t--)
    {
        int x;
        cin >> x;
        if (!x & (x - 1))
            cout << 0 << endl;
        else
        {
            int res = x - closestPowerOfTwo(x);
            cout << res * 2 << endl;
        }
    }
    return 0;
}