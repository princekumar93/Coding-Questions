/*
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
*/

#include <bits/stdc++.h>
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