/*
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

        vector<int> ans(nums.size());
        int i = 0;
        int j = nums.size() - 1;
        for (int k = nums.size() - 1; k >= 0; --k)
        {
            if (abs(nums[i]) > abs(nums[j]))
            {
                ans[k] = nums[i] * nums[i];
                i++;
            }
            else
            {
                ans[k] = nums[j] * nums[j];
                j--;
            }
        }

        return ans;
    }
};