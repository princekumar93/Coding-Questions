/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
class Solution
{
public:
    void moveZeroes(vector<int> &arr)
    {
        int b = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                int j = i + 1;
                for (; j < arr.size(); ++j)
                {
                    if (arr[j] != 0)
                    {
                        break;
                    }
                }
                if (j != arr.size())
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            /*
            0 1 0 3 12
            1 0 0 3 12
            1 3 0 0 12
            1 3 12 0 0
            */
        }
    }
};