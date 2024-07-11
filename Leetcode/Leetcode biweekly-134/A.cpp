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
    int numberOfAlternatingGroups(vector<int> &colors)
    {
        int res = 0;
        for (int i = 1; i < colors.size() - 1; i++)
        {
            if (colors[i] != colors[i - 1] && colors[i] != colors[i + 1])
                res++;
        }
        if (colors[colors.size() - 1] != colors[colors.size() - 2] && colors[colors.size() - 1] != colors[0])
            res++;
        if (colors[0] != colors[1] && colors[0] != colors[colors.size() - 1])
            res++;
        return res;
    }
};

int main()
{
    Solution solution;
    int input = exampleInput;
    solution.solutionFunction(input);

    // Example test cases
    // cout << solution.solutionFunction(exampleTest1) << endl; // Expected output: output1
    // cout << solution.solutionFunction(exampleTest2) << endl; // Expected output: output2

    return 0;
}