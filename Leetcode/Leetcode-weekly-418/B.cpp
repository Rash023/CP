#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

class Solution
{
public:
    vector<bool> vis;

    void dfs(int i, unordered_map<int, vector<int>> &adj)
    {
        vis[i] = true;
        for (auto v : adj[i])
        {
            if (!vis[v])
            {
                dfs(v, adj);
            }
        }
    }

    void dfs2(int i, unordered_map<int, vector<int>> &adj, vector<bool> &vis2, set<int> &res)
    {
        if (vis[i])
        {
            for (int j = 0; j < vis.size(); j++)
            {
                if (vis[j])
                {
                    res.insert(j);
                }
            }
            return;
        }

        vis2[i] = true;
        for (auto v : adj[i])
        {
            if (!vis2[v])
            {
                dfs2(v, adj, vis2, res);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>> &invocations)
    {
        unordered_map<int, vector<int>> adj;
        vis.resize(n, false);

        for (auto i : invocations)
        {
            adj[i[0]].push_back(i[1]);
        }

        dfs(k, adj);

        vector<bool> vis2(n, false);
        set<int> res;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i] && !vis2[i])
            {
                dfs2(i, adj, vis2, res);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (vis2[i])
            {
                res.insert(i);
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};

int main()
{
    int n, k, m;

    // Input number of methods (n), starting method (k), and number of invocations (m)
    cin >> n >> k >> m;

    vector<vector<int>> invocations(m, vector<int>(2));

    // Input invocations
    for (int i = 0; i < m; i++)
    {
        cin >> invocations[i][0] >> invocations[i][1];
    }

    Solution sol;
    vector<int> result = sol.remainingMethods(n, k, invocations);

    // Output the result
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
