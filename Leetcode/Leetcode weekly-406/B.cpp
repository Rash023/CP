// LC 3217. Delete Nodes From Linked List Present in Array

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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_map<int, bool> mp;
        for (auto i : nums)
            mp[i] = true;
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while (curr != nullptr)
        {
            if (mp.find(curr->val) == mp.end())
            {
                prev = curr;
                curr = curr->next;
            }
            else
            {
                ListNode *temp = curr;
                if (prev == nullptr)
                {
                    curr = curr->next;
                    head = curr;
                }
                else
                {
                    curr = curr->next;
                    prev->next = curr;
                }
                delete temp;
            }
        }
        return head;
    }
};
