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
    char kthCharacter(int position)
    {
        string s = "a";
        char next = 'a';

        while (s.length() < position)
        {
            string newPart = "";
            for (char letter : s)
            {
                char incrementedLetter = (letter == 'z') ? 'a' : letter + 1;
                newPart += incrementedLetter;
            }
            s += newPart;
        }
        return s[position - 1];
    }
};

int main()
{
    fastio;

    Solution solution;

    int input;
    cout << "Enter position: ";
    cin >> input;

    // Call the kthCharacter function with user input
    cout << "The character at position " << input << " is: " << solution.kthCharacter(input) << endl;

    return 0;
}
