/*
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
*/
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; ++i)
        {
            int a = nums[i] > 0 ? nums[i] : -nums[i];
            if (nums[a - 1] > 0)
                nums[a - 1] = -nums[a - 1];
        }

        for (int i = 0; i < n; ++i)
        {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }
        return ans;
    }
};

// 1  3  3  4
//-1