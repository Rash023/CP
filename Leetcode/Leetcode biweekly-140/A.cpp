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
    int minElement(vector<int> &nums)
    {
        int res = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            int sum = 0;
            while (temp > 0)
            {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            res = min(res, sum);
        }
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {234, 145, 92}; // example input
    cout << solution.minElement(nums) << endl;

    return 0;
}
