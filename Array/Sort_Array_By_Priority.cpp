/*
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &a)
    {
        for (int i = 0, j = 0; i < a.size(); i++)
        {
            if (!(a[i] & 1))
            {
                //cout<<a[i];
                int temp = a[i];
                a[i] = a[j];
                a[j++] = temp;
            }
        }
        return a;
    }
};