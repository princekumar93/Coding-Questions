/*
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
*/
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (i == arr.size())
                return;
            if (arr[i] == 0)
                break;
        }

        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == 0)
            {
                for (int j = arr.size() - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
                arr[i + 1] = 0;
                i++;
            }
        }
    }
};
