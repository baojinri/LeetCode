#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s)
{
    int f = 0, leng = 1;
    bool dp[s.size()][s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        dp[i][i] = true;
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = true;
            leng = 2;
            f = i;
        }
        else
            dp[i][i + 1] = false;
    }
    for (int i = 3; i <= s.size(); i++)
    {
        for (int j = 0; j + i - 1 < s.size(); j++)
        {
            if (s[j] == s[j + i - 1] && dp[j + 1][j + i - 2])
            {
                dp[j][j + i - 1] = true;
                leng = i;
                f = j;
            }
            dp[j][j + i - 1] = false;
        }
    }
    return s.substr(f, leng);
}

int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);
    return 0;
}