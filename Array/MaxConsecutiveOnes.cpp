/*
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int m = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                count++;
            else
                count = 0;
            m = std::max(m, count);
        }
        return m;
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 2, 0, 1, 0, 1, 1, 1};
    cout << s.findMaxConsecutiveOnes(v);
    return 1;
}