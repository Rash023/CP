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
        int x;
        cin >> x;
        int y;
        cin >> y;
        if (x - y >= 0 && x - y <= 1)
            cout << "YES" << endl;
        else if (y - x >= 0 && y - x <= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
