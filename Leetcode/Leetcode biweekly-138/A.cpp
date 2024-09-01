class Solution
{
public:
    int generateKey(int num1, int num2, int num3)
    {
        string s1 = to_string(num1);
        string s2 = to_string(num2);
        string s3 = to_string(num3);
        int n = max({s1.size(), s2.size(), s3.size()});
        while (s1.size() < n)
        {
            s1 = "0" + s1;
        }
        while (s2.size() < n)
        {
            s2 = "0" + s2;
        }
        while (s3.size() < n)
        {
            s3 = "0" + s3;
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int n1 = s1[i] - '0';
            int n2 = s2[i] - '0';
            int n3 = s3[i] - '0';
            res *= 10;
            res += min({n1, n2, n3});
        }
        return res;
    }
};