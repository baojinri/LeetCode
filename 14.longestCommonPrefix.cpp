#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    if(strs.size()==0)
        return "";
    int i = 0;
    string ans;
    while (true)
    {
        if (strs[0].size() == i)
            break;
        char temp = strs[0][i];
        int j;
        for (j = 1; j < strs.size(); j++)
        {
            if (i == strs[j].size()||strs[j][i]!=temp)
            {
                break;
            }
        }
        if (j == strs.size())
            ans += temp;
        else
        {
            break;
        }
        i++;
    }
    return ans;
}

int main()
{
    int n;
    vector<string> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    cout << longestCommonPrefix(s);
    return 0;
}