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
    long long maximumPoints(vector<int> &enemyEnergies, int currentEnergy)
    {
        ll res = currentEnergy;
        if (enemyEnergies[0] > currentEnergy)
            return 0;
        sort(all(enemyEnergies));
        for (int i = 1; i < enemyEnergies.size(); i++)
            res += enemyEnergies[i];
        return res / enemyEnergies[0];
    }
};
