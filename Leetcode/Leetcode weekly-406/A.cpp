// LC 3216. Lexicographically Smallest String After a Swap

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
    string getSmallestString(string s)
    {
        for (int i = 1; i < s.size(); i++)
        {
            int curr = s[i] - '0';
            int prev = s[i - 1] - '0';
            if (curr & 1 && prev & 1 && curr > prev || !(curr & 1) && !(prev & 1) && curr > prev)
            {
                swap(s[i], s[i - 1]);
                break;
            }
        }
        return s;
    }
};

int main()
{
    Solution solution;
    string s;
    getline(cin, s);
    solution.getSmallestString(s);

    // Example test cases
    // cout << solution.solutionFunction(exampleTest1) << endl; // Expected output: output1
    // cout << solution.solutionFunction(exampleTest2) << endl; // Expected output: output2

    return 0;
}