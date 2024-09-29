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
    int countOfSubstrings(string word, int k)
    {
        int res = 0;
        for (int i = 0; i < word.size(); i++)
        {
            unordered_set<char> st;
            int cCnt = 0;
            for (int j = i; j < word.size(); j++)
            {
                if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u')
                {
                    st.insert(word[j]);
                }
                else
                {
                    cCnt++;
                }

                if (st.size() == 5 && cCnt == k)
                    res++;
                if (cCnt > k)
                    break;
            }
        }
        return res;
    }
};

int main()
{
    fastio;

    Solution solution;

    // Input word and value of k
    string word;
    int k;

    cout << "Enter the string: ";
    cin >> word;
    cout << "Enter the number of consonants allowed (k): ";
    cin >> k;

    // Call the countOfSubstrings method and output the result
    int result = solution.countOfSubstrings(word, k);
    cout << "The number of valid substrings is: " << result << endl;

    return 0;
}
