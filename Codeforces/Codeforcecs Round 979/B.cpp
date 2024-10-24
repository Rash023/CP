#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            s += '0';
        }
        s += '1';
        cout << s << endl;
    }
    return 0;
}
