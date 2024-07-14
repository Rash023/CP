// LC 3218. Minimum Cost for Cutting Cake I

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
    int minimumCost(int m, int n, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        sort(horizontalCuts.begin(), horizontalCuts.end(), greater<int>());
        sort(verticalCuts.begin(), verticalCuts.end(), greater<int>());

        int horizontalPieces = 1;
        int verticalPieces = 1;
        int i = 0, j = 0;
        int minCost = 0;
        while (i < horizontalCuts.size() && j < verticalCuts.size())
        {
            if (horizontalCuts[i] >= verticalCuts[j])
            {
                minCost += horizontalCuts[i] * verticalPieces;
                horizontalPieces++;
                i++;
            }
            else
            {
                minCost += verticalCuts[j] * horizontalPieces;
                verticalPieces++;
                j++;
            }
        }
        while (i < horizontalCuts.size())
        {
            minCost += horizontalCuts[i] * verticalPieces;
            i++;
        }
        while (j < verticalCuts.size())
        {
            minCost += verticalCuts[j] * horizontalPieces;
            j++;
        }

        return minCost;
    }
};
