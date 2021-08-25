/*
Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int mx = -1;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = mx;
            mx = std::max(mx, temp);
        }
        return arr;
    }
};
int main()
{
    Solution s;
    vector<int> v = {17, 18, 5, 4, 6, 1};
    auto vv = s.replaceElements(v);
    for (int a : vv)
    {
        cout << a << " ";
    }
    return 1;
}