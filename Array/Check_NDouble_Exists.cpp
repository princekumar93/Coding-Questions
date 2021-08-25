/*
Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.

Input: arr = [3,1,7,11]
Output: false
Explanation: In this case does not exist N and M, such that N = 2 * M.
*/
class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        set<float> s;
        for (int i = 0; i < arr.size(); ++i)
        {
            //cout<<arr[i]<<" ";
            if ((s.find(arr[i] / 2) != s.end() && arr[i] % 2 == 0) || s.find(arr[i] * 2) != s.end())
                return true;

            s.insert(arr[i]);
        }
        return false;
    }
};