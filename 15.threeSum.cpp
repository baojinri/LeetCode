#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    map<int, int> flag;
    for (int i = 0; i < nums.size(); i++)
    {
        flag[nums[i]]=i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if(i!=0&&nums[i]==nums[i-1])
                continue;
        for (int j = i+1; j < nums.size(); j++)
        {
            if(j!=i+1&&nums[j]==nums[j-1])
                continue;
            if(flag[0-nums[i]-nums[j]]>j)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(0-nums[i]-nums[j]);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    threeSum(nums);
    
    return 0;
}