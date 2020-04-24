#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int ans = 0;
    int i = 0;
    int j = height.size() - 1;
    while (i != j)
    {
        if ((j - i) * min(height[i], height[j]) > ans)
            ans = (j - i) * min(height[i], height[j]);
        if (height[i] < height[j])
            i++;
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{
    int n;
    vector<int> height;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        height.push_back(temp);
    }
    cout << maxArea(height);
}