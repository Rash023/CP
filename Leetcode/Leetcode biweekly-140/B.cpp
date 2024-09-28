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

class Solution
{
public:
    long long maximumTotalSum(vector<int> &m)
    {
        sort(begin(m), end(m));
        unordered_map<int, bool> vis;
        int curr = m[m.size() - 1];
        long long res = 0;
        for (int i = m.size() - 1; i >= 0; i--)
        {
            if (vis[m[i]] == true)
            {
                curr = min(curr, m[i] - 1);
                if (curr <= 0)
                    return -1;
                vis[curr] = true;
                res += curr;
                curr--;
            }
            else
            {
                curr = m[i];
                res += curr;
                vis[curr] = true;
            }
        }
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {5, 3, 3, 2}; // example input
    cout << solution.maximumTotalSum(nums) << endl;

    return 0;
}
