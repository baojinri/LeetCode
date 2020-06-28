#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int p, q;
    int c = 10000;
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        p = i - 1;
        q = i + 1;
        while (p > -1 && q < nums.size())
        {
            if (nums[p] + nums[i] + nums[q] == target)
                return target;
            else if (nums[p] + nums[i] + nums[q] > target)
            {
                if (nums[p] + nums[i] + nums[q] - target < c)
                {
                    ans = nums[p] + nums[i] + nums[q];
                    c = ans - target;
                }
                p--;
            }
            else
            {
                if (target - nums[p] - nums[i] - nums[q] < c)
                {
                    ans = nums[p] + nums[i] + nums[q];
                    c = target - ans;
                }
                q++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int target;
    int temp;
    cin >> temp >> target;
    for (int i = 0; i < temp; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << threeSumClosest(nums, target);
}
