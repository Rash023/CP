#include <iostream>
#include <vector>
using namespace std;

// d

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ycount = 0;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x;
            cin >> y;

            if (y == 1)
            {
                ycount++;
            }
        }
        cout << ycount * 2 << endl;
    }
}