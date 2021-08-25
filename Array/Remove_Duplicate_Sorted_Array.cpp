/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 0 || size == 1)
            return size;
        int j = 1;
        for (int i = 1; i < size; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
