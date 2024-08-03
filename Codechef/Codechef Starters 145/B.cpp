    #include <bits/stdc++.h>
    using namespace std;

    typedef long long ll;
    typedef pair<int, int> pii;
    typedef vector<int> vii;
    typedef vector<long long> vll;
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
    #define fl(i, n) for (int i = 0; i < n; i++)
    template <typename T1, typename T2> // cin >> pair<T1, T2>
    istream &operator>>(istream &istream, pair<T1, T2> &p)
    {
        return (istream >> p.first >> p.second);
    }
    template <typename T> // cin >> vector<T>
    istream &operator>>(istream &istream, vector<T> &v)
    {
        for (auto &it : v)
            cin >> it;
        return istream;
    }
    template <typename T1, typename T2> // cout >> pair<T1, T2>
    ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
    {
        return (ostream << p.first << " " << p.second);
    }
    template <typename T> // cout >> vector<T>
    ostream &operator<<(ostream &ostream, const vector<T> &c)
    {
        for (auto &it : c)
            cout << it << " ";
        return ostream;
    }

    void solve()
    {
        // Write your code here
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            if(s[0]=='1') cout<<0<<endl;
            else cout<<1<<endl;
            return;
        }
        int temp=2;
        if(s[0]=='1') temp--;
        if(s[n-1]=='1') temp--;
        cout<<temp<<endl;
        
    }

    int main()
    {
        fastio;
        int t = 1;
        cin >> t; // Uncomment if there are multiple test cases
        while (t--)
        {
            solve();
        }
        return 0;
    }