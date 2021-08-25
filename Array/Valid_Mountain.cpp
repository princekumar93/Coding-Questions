/*
Input: arr = [0,3,2,1]
Output: true

Input: arr = [3,5,5]
Output: false
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int size = arr.size();
        int i = 0;
        while (i + 1 < size && arr[i] < arr[i + 1])
            i++;

        if (i == 0 || i == size - 1)
            return false;

        while (i + 1 < size && arr[i] > arr[i + 1])
            i++;

        return (i == size - 1);
    }
};
int main()
{
    Solution s;
    vector<int> v = {0, 3, 2, 1};
    cout << s.validMountainArray(v);
    return 1;
}