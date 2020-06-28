#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> ans;
vector<string> phone;
int dfs(int deep, string digits, string temp)
{
    if (deep == digits.size())
    {
        if (deep != 0)
            ans.push_back(temp);
        return 0;
    }
    int x = digits[deep] - '0';
    for (int i = 0; i < phone[x - 2].size(); i++)
    {
        dfs(deep + 1, digits, temp + phone[x - 2][i]);
    }
    return 0;
}

vector<string> letterCombinations(string digits)
{
    phone.push_back("abc");
    phone.push_back("def");
    phone.push_back("ghi");
    phone.push_back("jkl");
    phone.push_back("mno");
    phone.push_back("pqrs");
    phone.push_back("tuv");
    phone.push_back("wxyz");
    string temp = "";
    dfs(0, digits, temp);
    return ans;
}

int main()
{
    string digits = "";
    cin >> digits;
    letterCombinations(digits);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}