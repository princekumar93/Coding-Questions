#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            int n = 0;
            int r = nums[i];
            while (r != 0)
            {
                r = r / 10;
                n++;
            }
            if (!(n & 1))
                count++;
        }
        return count;
    }
};

int main()
{
    Solution s;
    //vector<int> v = {555, 901, 482, 1771};
    vector<int> v = {12, 345, 2, 6, 7896};
    cout << s.findNumbers(v);
    return 1;
}