#include <bits/stdc++.h>
using namespace std;

vector<long long> getFreqVector(const map<int, int> &freqMap)
{
    vector<long long> freqVector;
    for (auto &[key, value] : freqMap)
    {
        freqVector.push_back(value);
    }
    return freqVector;
}

long long findMaxK(const vector<long long> &freqVector)
{
    long long maxK = 0;
    long long sum = 0;
    for (size_t i = 1; i <= freqVector.size(); ++i)
    {
        sum += freqVector[i - 1];
        long long value = (sum / i) * i;
        maxK = max(maxK, value);
    }
    return maxK;
}

void processTestCase()
{
    long long n;
    cin >> n;

    vector<long long> elems(n);
    map<int, int> freqMap;
    for (long long i = 0; i < n; ++i)
    {
        cin >> elems[i];
        freqMap[elems[i]]++;
    }

    vector<long long> freqVector = getFreqVector(freqMap);
    sort(freqVector.begin(), freqVector.end(), greater<long long>());

    long long maxK = findMaxK(freqVector);
    cout << maxK << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        processTestCase();
    }

    return 0;
}
